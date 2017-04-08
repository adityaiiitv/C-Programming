/*Program to find the coefficient of the power of the x*/
#include<stdio.h>
void main()
{
int m,n,k,result=0,i,j;
printf("Please give the highest degrees of the f(x) and g(x) \n");
scanf("%d%d",&m,&n);
int f[m+1],g[n+1];
for(i=0;i<=m;i++)
{
printf("Please give the coefficient x^%d of f(x) :",i);
scanf("%d",&f[i]);
}/*scanning of coefficient of f(x)*/
for(i=0;i<=n;i++)
{
printf("Please give the coefficient x^%d of g(x):",i);
scanf("%d",&g[i]);
}/*scanning of coefficient of g(x)*/
printf("Please give  the power of x you wanna find\n");
scanf("%d",&k);
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
if(k==i+j)
result+=f[i]*g[j];/*The main algorithm or computation*/
}
}
printf("The coefficient of x^%d in multiplication of f(x) and g(x) is %d \n",k,result);
}   /*end of main*/
