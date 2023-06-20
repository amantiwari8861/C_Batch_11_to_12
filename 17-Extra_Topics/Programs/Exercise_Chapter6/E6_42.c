/*E6.42*/
#include<stdio.h>
int ProdDigits(long num);
int main(void)
{
	long num;
	printf("Enter a number : ");
	scanf("%ld",&num);
	printf("%d\n",ProdDigits(num));
	return 0;
}
int ProdDigits(long num)
{
	int prod=1,dig;
	do
	{
		dig=num%10;
		prod*=dig;
		num/=10;
	}while(num>0); 
	return prod;
}
