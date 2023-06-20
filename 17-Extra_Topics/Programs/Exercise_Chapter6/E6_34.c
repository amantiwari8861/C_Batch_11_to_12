/*E6.34*/
#include<stdio.h>
int func(int a,int b);
int func1(int a,int b);
int func2(int a,int b);
int main(void)
{
	int a,b;
	printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
	printf("%d ",func(a,b));
	printf("%d ",func1(a,b));
	printf("%d ",func2(a,b));
	return 0;
}
int func(int a,int b)
{
	a=a-b;
	if(a!=0)
		return a;
	else
		return 0;
}
int func1(int a,int b)
{
	a=a-b;
	return a;
}
int func2(int a,int b)
{
	return a-b;
}