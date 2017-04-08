#include<stdio.h>
void main()
{
  int a[100],n,i,temp,p;
  printf(" enter the no of values of array \n");
  scanf("%d",&n);
  printf("enter array \n");
  for(i=0;i<=n-1;i++)
   {
     scanf("%d",&a[i]);
 }
  if(n%2==0)
 { p=(n/2)-1;

for(i=0;i<=p;i++)
{
  temp=a[i];
  a[i]=a[p+i+1];
  a[p+i+1]=temp;
}}
else
{p=n/2;
for(i=0;i<p;i++)
{
  temp=a[i];
 a[i]=a[p+i+1];
 a[p+i+1]=temp;
}}


for(i=0;i<=n-1;i++)     
{ printf("%d  ",a[i]);
}
}
