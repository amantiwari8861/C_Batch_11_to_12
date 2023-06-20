/*E6.38*/
#include<stdio.h>
int func(int,int);
int func1(int,int);
int main(void)
{
	int a,b;
	printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
	printf("%d  %d  ",func(a,b),func1(a,b));
	return 0;
}
int func(int m,int n)
{
	if(m==5)
		return n-10;
	else if(m>5)
		return n+10;
	else
		return n;
}
int func1(int m,int n)
{
	if(m==5)
		return n-10;
	if (m>5)
		return n+10;
	return n;
}