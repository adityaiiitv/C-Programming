#include<stdio.h>
void printcharacter(const char *sptr);
int main(void)
{ 
   char s[]="Print characters of a string";
   puts("The string is");
   printcharacter(s);
   puts("");
}
void printcharacter(const char *sptr)
{
  for(;*&sptr!='\0';++sptr)
   {
     printf("%c",*sptr);
    }
}
