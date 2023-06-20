/*E6.29*/
#include<stdio.h>
int func(int a,int b);  
int func1(int a, int b);
int func2(int a,int b);
int f1(int x,int y);
int f2(int x,int y);
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
	int x;
	if(a==b)
 		x=f1(a,b);
	else
		x=f2(a,b);
	return x;
}
int func1(int a,int b)
{
	if(a==b)
 		return f1(a,b);
	return f2(a,b);
}
int func2(int a,int b)
{
	return a==b? f1(a,b): f2(a,b);
}
int f1(int x,int y)
{
	return x+y;
}
int f2(int x,int y)
{
	return x-y;
}