#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
int vow=0,cons=0,i=0;
printf("enter a string \n");
gets(str);
while(str[i] != '\0')
{
if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
vow++;
else
cons++;
i++;
}
}

