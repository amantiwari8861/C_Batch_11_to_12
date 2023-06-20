/*E6.37*/
#include<stdio.h>
int func(int a,int b);
int func1(int a,int b);
int main(void)
{
	int a,b;
	printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
	printf("%d  %d  ",func(a,b),func1(a,b));
	return 0;
}
int func(int a,int b)
{
	a=a-b;
	if(a!=2)
	{
		a++;
		return a;
	}
	else
	{
		a=a+b;
		printf("%d ",a);
		return b;
	}
}

int func1(int a,int b)
{
	a=a-b;
	if(a!=2)
	{	
		a++;
		return a;
	}
	a=a+b;
	printf("%d ",a);
	return b;
}
