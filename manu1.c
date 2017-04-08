#include<stdio.h>
void main()
{
int  num,i,len,k,j,l,m,n,o;
printf("enter the number of elements of the set of which the partial order is given \n");
scanf("%d",&num);
printf("enter the reflexive elements \n");
int a[2*num],b[2*num],c[2*num];
for(i=0;i<2*num-1;i++)
{
scanf(" %d \n",&a[i]);
}

printf("Enter the number of ordered pairs left \n");
scanf("%d \n", &len);
for(l=0;l<2*len-1;l++)
{
	scanf("%d \n",&b[l]);
}

c[0]=b[0];
c[1]=b[1];
int flag = 0;
int temp;
for(m=2; m<2*num-1; m+2){
	for(n = 0; n<m; n++){
		if(b[m] == c[n]){
		flag = 1;
		}
	}
	if(flag == 0){
	c[n] = b[m];
	}
	for(k=0; k<=m; k++){
		if(b[m+1] == c[k]){
		temp = c[k];
		c[k] = c[m];
		c[m] = temp;
		}
	}
}
for(o = 0; o<2*num-1; o++){
	if(c[o] != 0){
	printf("%d< ",c[o]);
	}
}
}
		











