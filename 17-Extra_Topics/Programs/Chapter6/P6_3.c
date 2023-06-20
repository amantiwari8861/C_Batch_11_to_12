/*P6.3 Program to find the sum of two numbers*/
#include<stdio.h>
int sum(int x,int y);		/*Function declaration*/
int main(void)
{
	int a,b,s;
	printf("Enter values for a and b : ");
	scanf("%d%d",&a,&b);
	s=sum(a,b);	/*Function call*/
	printf("Sum of %d and %d is %d\n",a,b,s);
	return 0;
}
int sum(int x,int y)	/*Function definition*/
{
	int s;
	s=x+y;	
	return s;
}