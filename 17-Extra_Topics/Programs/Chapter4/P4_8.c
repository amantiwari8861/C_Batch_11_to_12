/*P4.8 Program to interchange the value of two variables using comma operator*/
#include<stdio.h>
int main(void)
{
 	int a=8,b=7,temp;
	printf("a=%d, b=%d\n",a,b);
	temp=a,a=b,b=temp;
	printf("a=%d, b=%d\n",a,b);
	return 0;
}