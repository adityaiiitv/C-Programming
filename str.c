#include<stdio.h>
void main()
{
char str[20];
char rev[20];
int i=-1,j=0;
printf("enter a string\n");
scanf("%s",str);
while(str[++i}!='\0')
   {
       while(i>=0)
        { 
            rev[j++]=str[--i];
            rev[j]='\0';
            printf("reverse string is : %s",rev);
        }
   }
}
