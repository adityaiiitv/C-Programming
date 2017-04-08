#include <stdio.h>
void main()
{
int x;
printf("Welcome to Pattern Store\n");
printf("Enter the number for which u want to make pattern(5-9)");
scanf("%d",&x);
printf("The patten is:\n");
int i;
int j;
int k;
int l;
int m;
for(i=0; i<x; i++)
{   l=x-i;  m=0;
                while(m<i)
		    {   printf(" ");   m++;  }
		for(j=l; j>0; j--)
			printf("%d",j);
		for(k=2; k<=l; k++)
			printf("%d",k);
printf("\n");
}
}


