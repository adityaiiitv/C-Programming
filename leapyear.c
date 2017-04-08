#include<stdio.h>
void main()
{
int year;
printf("Leap year finder\n");
printf("Enter the year: ");
scanf("%d",&year);
if(year%4==0)
{
	if(year%100==0)
	{	
		if(year%400==0)
		printf("\nIt is a leap year\n");
		else
		printf("\nIt is not a leap year\n");
	}	
	else
	printf("\nIt is a leap year\n");
}
else
printf("\nIt is not a leap year\n");
}

