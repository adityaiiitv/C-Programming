#include<stdio.h>
void main()
{
int a[3][3];
int temp1 = 0;
int temp2 = 0;
int temp3 = 0;



printf("enter element [1][1] \n");
scanf("%d",&a[0][0]);
printf("enter element [1][2] \n");
scanf("%d",&a[0][1]);
printf("enter element [1][3] \n");
scanf("%d",&a[0][2]);
printf("enter element [2][1] \n");
scanf("%d",&a[1][0]);
printf("enter element [2][2] \n");
scanf("%d",&a[1][1]);
printf("enter element [2][3] \n");
scanf("%d",&a[1][2]);
printf("enter element [3][1] \n");
scanf("%d",&a[2][0]);
printf("enter element [3][2] \n");
scanf("%d",&a[2][1]);
printf("enter element [3][3] \n");
scanf("%d",&a[2][2]);


int t=a[0][0];
int i,k,l,m,n;
for(i=0;i<3;i++)
{
if(a[i][i] != 1)
{
printf("not reflexive");
temp1 = 1;
break;
}
}


for(k=0;k<3;k++)
{
for(l=0;l<3;l++)
{
if(a[k][l]!=a[l][k])
{
printf("\n not symmetric\n");
temp2 = 1;
break;
}
}
if(temp2 == 1)
break;
}


for( m=0;m<3;m++)
{
for( n=0;n<3;n++)
{
for( k=0;k<3;k++)
{
if(a[m][n]==a[n][k] && a[m][k]!=a[m][n])
{ 
printf("\n not transitive \n");
temp3=1;
break;
}
}
if(temp3 == 1)
break;
}
if(temp3 == 1)
break;
}




if((temp3=0)&&(temp2=0)&&(temp1=0))
{
printf("\n the relation is equivalence \n");
}
else if((temp3!=0)||(temp2!=0)||(temp1!=0))
{
printf(" \n the relation is not equivalence \n");
}
}
