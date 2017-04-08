#include<stdio.h>
void main()
{
int len;
printf("This program will tell you the type of relation you have entered");
printf("Enter the no. of elements in your set ");
scanf("%d",&len);
printf("Your relation will be entered in the form of a matrix of order %d\n",len);
printf("If an element exist in the relation enter 1 and if not enter 0");
int i,j, ans1=0,ans2=0;
int arr[len][len];
for (i=0; i<len; i++)
{
      for (j=0; j<len; j++)
	{
            X:
             printf("\nIs element %d,%d present ",i+1,j+1);
	     scanf("%d",&arr[i][j]);	
              if( (arr[i][j]!=0)&&(arr[i][j]!=1))
                goto X;
        }
}
printf("/n The entered matrix is ");
for (i=0; i<len; i++)
{
      for(j=0; j<len; j++)
         printf("%d  ",arr[i][j]);
  printf("\n");
}
int count=0;
for (i=0; i<len; i++)
{
   for (j=0; j<len; j++)
     {
	if(i==j)
	{
	   if(arr[i][j]==1)
             count++;
        }
     }
}
if (count==len)
{
printf("The given relation is Reflexive");
ans1++;
ans2++;
}
int sym=0,tr=0,asym=0;
for (i=0; i<len; i++)
{
for (j=0; j<len; j++)
{
    if (arr[i][j]==arr[j][i]==1)
      sym=1;
    if ((arr[i][j]==arr[j][i])&&(i==j))
      asym=1;
}
}
if(sym)
{
printf("\nThe given relation is Symmertric" );
ans1++;
}
if 
