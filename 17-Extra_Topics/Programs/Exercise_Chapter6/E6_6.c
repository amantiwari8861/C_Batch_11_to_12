/*E6.6*/
#include<stdio.h>
int sum(int x,int y);
int multiply(int x,int y);
int main(void)
{
	int m=6,n=3;
	printf("%d\t",multiply(m,n));
	printf("%d\t",multiply(15,4));
	printf("%d\t",multiply(m+n,m-n));
	printf("%d\n",multiply(6,sum(m,n))); 
	return 0;
}	
int multiply(int x,int y)
{
	return x*y;
}
int sum(int x,int y)
{
	return x+y;
}
