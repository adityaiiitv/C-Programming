#include<stdio.h>
void main()
{int i,flag=0;
char a[10],b[10];
gets(a);
gets(b);
for(i=0;a[i]!='\0' || b[i]!='\0';i++)
{
if(a[i]!=b[i])
{printf(" \n not same");
flag=1;
break;
}
}
if(flag==0)
{printf("\n same");
}
}

