#include<stdio.h>
void main()
{
int a,b;
char ch;
float res;
printf("Simple Calculator\n");
printf("Enter two nos.\n");
printf("Enter no. 1: ");
scanf("%d",&a);
printf("\nEnter no. 2: ");
scanf("%d",&b);
x:
printf("\nEnter the operation(+,-,*,/,modulo): ");
scanf("%c",&ch);
switch(ch)
{
case '+':
res=a+b;
break;

case '-':
res=a-b;
break;

case '*':
res=a*b;
break;

case '/':
res=a/b;
break;

case '%':
res=a%b;
break;

default:
printf("Wrong Character\n");
goto x;
}
printf("\nThe result is: %f",res);

}
