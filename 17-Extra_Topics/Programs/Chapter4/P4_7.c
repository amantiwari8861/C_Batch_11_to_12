/*P4.7 Program to understand the use of comma operator*/
#include<stdio.h>
int main(void)
{
	int a,b,c,sum;
	sum = (a=8,b=7,c=9,a+b+c);	
	printf("Sum=%d\n",sum);
	return 0;
}