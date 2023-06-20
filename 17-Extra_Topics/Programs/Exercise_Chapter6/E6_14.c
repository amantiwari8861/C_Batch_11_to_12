/*E6.14*/
#include<stdio.h>
int sum(int a,int b);
int main(void)
{
	(void)sum(1,2);
	return 0;
}
int sum(int a,int b)
{
	printf("Sum is %d\n",a+b);
	return a+b;
}
