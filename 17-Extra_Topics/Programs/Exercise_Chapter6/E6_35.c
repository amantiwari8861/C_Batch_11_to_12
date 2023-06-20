/*E6.35*/
#include<stdio.h>
int func(int,int);
int func1(int,int);
int main(void)
{
	int a,b;
	printf("Enter a and b :");
	scanf("%d%d",&a,&b);
	printf("%d ",func(a,b));
	printf("%d ",func1(a,b));
	return 0;
}
int func(int a,int b)
{
	a=a-b;
	if(a!=0)
	{
		a++;
		return a;
	}
	else
		return 0;
}
int func1(int a,int b)
{
	a=a-b;
	if(a!=0)
		a++;
	return a;  
}