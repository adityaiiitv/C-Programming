#include<stdio.h>
#define FRAC(number)(1.0/(number))
int main()
{
float i;
for(i=0.0;i<10.0;i+=1.0)
printf("1/%f=%f\n",i,FRAC(i));
return 0;
}
