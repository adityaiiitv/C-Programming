#include<stdio.h>
void main()
{
 int n,i,j,k,l,c;
 printf("\n Enter the number of rows in the desired Pascal triangle \n");
 scanf("%d",&n);
 int arr[n][n];
 arr[0][0]=arr[1][0]=arr[1][1]=1;
 for(i=2;i<n;i++)
  { 
   for(j=0;j<=i;j++)
     {
       if(j==0 || j==i)
         {
           arr[i][j]=1;
          }

       else
       arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
      }

    }



 for(k=0;k<n;k++)
  {printf(" \n"); 
   for(c=0;c<n-k;c++)
{ printf(" ");}
   for(l=0;l<=k;l++)
    { 
     printf("%d ",arr[k][l]);
    }  
   }
}
