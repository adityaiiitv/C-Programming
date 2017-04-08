
#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
char t;
int i,j,k;
printf("\n enter string \n");
scanf(" %[^\n]",s);
int n=strlen(s);
for(j=0;j<n-1;j++)
{
  for(k=0;k<n;k++)
    {
      if(s[k]>s[k+1])
        {
          t=s[k];
          s[k]=s[k+1];
          s[k+1]=t;
         }
    }
}
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}

}
