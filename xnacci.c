#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
int terms;
int arr[100];
printf("Welcome to X-Nacci series builder version 2.0\n");
printf("An X-Nacci series is just like a fibonacci series except\n the fact that in fibonacci series the consecutive term is the sum of \nprevious two terms and in X-Nacci,the choice is yours.For eg.\nif u enter the data for 4-Nacci series, the give series will be like\n0,1,1,1,3,6,11,21....and so on.");
printf("\nEnter the no. for which u want to build the X-Nacci series(2-99) ");
scanf("%d",&n);
printf("\nEnter the no. of terms u want to have for your X-Nacci series(max. 100) ");
scanf("%d",&terms);
printf("\nBuilding your X-Nacci series\n ");
arr[0]=0;
printf("%d,",arr[0]);
int i;
for(i=1; i<n; i++)
{
arr[i]=1;
printf("%d,",arr[i]);
}
int temp,j;
for(; i<=terms; i++)
{
  temp=0;
	for(j=i-1; j>=(i-n); j--)
		{
			temp+=arr[j];
		}
arr[i]=temp;
printf("%d,",arr[i]);
}
}


