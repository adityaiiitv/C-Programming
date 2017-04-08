#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,len;
  char s[100],temp;
  puts("Enter string");
  gets(s);
  len=strlen(s);
  for(i=0;i<len-1;i++)
    {
      for(j=0;j<len-i-1;j++)
        {
          if(s[j]>s[j+1])
            {
              temp=s[j];
              s[j]=s[j+1];
              s[j+1]=temp;
             }
         }
     }
   puts(s);
 }
