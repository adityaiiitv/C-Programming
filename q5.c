#include<stdio.h>
void disp(int []);
void main()
{
int a[10];
disp(a);
}
void disp(int x[])
{
int i;
for(i=0;i<10;i++)
{ 
  printf(" %d ",x[i]);
}
}
