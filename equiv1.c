#include<stdio.h>
void main()
{
int order,arr[10][10],ref=1,sym=1,asym=1,tran=1,i,j,k;
printf("This program is to check whether the entered relation is equivalence or partial order\n");
printf("Enter the order of the relation(n<10): ");
scanf("%d",&order);
printf("\nEnter the relation:\n");
for(i=0;i<order;i++)
{
	for(j=0;j<order;j++)
	{
	    printf("Enter the element [%d][%d]: ",i+1,j+1);
	    scanf("%d",&arr[i][j]);
	    printf("\n");
	}
}
printf("The matrix entered is:\n");
for(i=0;i<order;i++)
{
	for(j=0;j<order;j++)
	{
           printf("%d ",arr[i][j]);
        }
printf("\n");
}

for(i=0;i<order;i++)
{
if(arr[i][i]!=1)
ref=0;
}

for(i=0;i<order;i++)
{
	for(j=0;j<order;j++)
	{
	  if((arr[i][j]==1)&&(arr[j][i]!=1))
	    sym=0;
          if((arr[i][j]==1)&&(arr[j][i]!=1)&&(i!=j))
	    asym=0;
	}
}

for(i=0;i<order;i++)
{
    for(j=0;j<order;j++)
    {
	for(k=0;k<order;k++)
	{  
           if((arr[i][j]==1)&&(arr[j][k]==1)&&(arr[i][k]!=1))
	      tran=0;
	}
    }
}

if(ref==1)
printf("\nThe relation is reflexive\n");
else
printf("\nThe relation is irreflexive\n");

if(sym==1)
printf("The relation is syymetric\n");
else if(asym==1)
printf("The relation is antisymetric\n");
else
printf("The relation is not symmetric\n");

if(tran==1)
printf("The relation is transitive\n");
else
printf("The relation is not transitive\n");

if((ref==1)&&(sym==1)&&(tran==1))
printf("The given relation is equivalence\n");
else if((ref==1)&&(asym==1)&&(tran==1))
printf("The given relation is Partial Ordering\n");
else
printf("The given relation is neither equivalence nor Partial ordering\n ");

}


