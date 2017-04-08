#include<stdio.h>
void main()
{
int sum=0,rem;
int x;
printf("Digit sum calculator\n");
printf("Enter the no.: ");
scanf("%d",&x);
while(x!=0)
{
rem=x%10;
sum+=rem;
x=x/10;
}
printf("\nThe sum of the digits of the above no. is %d",sum);
}
