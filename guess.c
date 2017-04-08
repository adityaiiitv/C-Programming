#include<stdio.h>
void main()
{
int x,ans;
printf("Number guesser\n");
do
{
printf("\nEnter the no. :");
scanf("%d",&x);
printf("\nthe no. you entered is %d\n",x);
printf("Do you want to continue ? (0/1)");
scanf("%d",&ans);
}while(ans==1);
}
