/*E6.31*/
#include<stdio.h>
int func(int n);
int func1(int n);
int main(void)
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("%d ",func(n));
	printf("%d ",func1(n));
	return 0;
}
int func(int n)
{
	if(n==39)
	{
		n+=5;
		return n;
	}
	else
		return n;
}
int func1(int n)
{
	if(n==39)
		n+=5;
	return n;
}
