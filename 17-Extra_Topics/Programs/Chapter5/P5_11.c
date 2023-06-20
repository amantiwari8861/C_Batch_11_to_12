/*P5.11 Program to find the product of digits of any number*/
#include<stdio.h>
int main(void)
{
	int n,prod=1,rem;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;	/*taking last digit of n*/
		prod*=rem;
		n/=10;	/*skipping last digit of n*/
	}
	printf("Product of digits = %d\n",prod);
	return 0;
}