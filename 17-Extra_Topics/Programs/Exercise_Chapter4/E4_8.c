/*E4.8*/
#include<stdio.h>
int main(void)
{
	int a=14,b,c;
	a=a%5;
	b=a/3;
	c=a/5%3; 
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
}