/*P6.10 Program to find out the factorial of a number*/
#include<stdio.h>
long int factorial(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<0)
		printf("No factorial of negative number\n");
	else
		printf("Factorial of %d is %ld\n",num,factorial(num));
	return 0;
}
long int factorial(int n)
{
	int i;
	long int fact=1;
	if(n==0)
		return 1;
	for(i=n; i>1; i--)
		fact*=i;
	return fact;
}