#include<stdio.h>
void main()
{
int n,a[10][10],ref=0,sym=0,asym=0,tran=0,i,j,k;
printf("This program is to check whether the entered relation is equivalence or partial order\n");
printf("Enter the order of the relation(n<10): ");
scanf("%d",&n);
printf("\nEnter the relation:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	    printf("Enter the element [%d][%d]: ",i+1,j+1);
	    scanf("%d",&a[i][j]);
	    printf("\n");
	}
}
printf("The matrix entered is:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
           printf("%d ",a[i][j]);
        }
printf("\n");
}

for(i=0;i<n;i++)
{
if(a[i][i]!=1)
ref=1;
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	  if((a[i][j]==1)&&(a[j][i]!=1))
	    sym=1;
          if((a[i][j]==1)&&(a[j][i]!=1)&&(i!=j))
	    asym=1;
	}
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
	for(k=0;k<n;k++)
	{  
           if((a[i][j]==1)&&(a[j][k]==1)&&(a[i][k]!=1))
	      tran=1;
	}
    }
}

if(ref==0)
printf("\nThe relation is reflexive\n");
else
printf("\nThe relation is irreflexive\n");

if(sym==0)
printf("The relation is syymetric\n");
else if(asym==0)
printf("The relation is antisymetric\n");
else
printf("The relation is not symmetric\n");

if(tran==0)
printf("The relation is transitive\n");
else
printf("The relation is not transitive\n");

if((ref==0)&&(sym==0)&&(tran==0))
printf("The given relation is equivalence\n");
else if((ref==0)&&(asym==0)&&(tran==0))
printf("The given relation is Partial Ordering\n");
else
printf("The given relation is neither equivalence nor Partial ordering\n ");

}


