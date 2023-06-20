/*E6.23*/
#include<stdio.h>
int func(int x,int y);
int main(void)
{
	int a=2,b=5;
	a=func(a+b,a-b);
	printf("%d\n",a);
	return 0;
}
int func(int x,int y)
{ 
	return x+y,x-y; 
}