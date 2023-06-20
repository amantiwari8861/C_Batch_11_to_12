/*E7_15 Count prime numbers*/
#include<stdio.h>
#include<math.h>
int countPrimes(int a, int b);
int isprime(int n);
int main(void)
{
	int a,b;
	printf("Enter values of a and b :");
	scanf("%d %d",&a,&b);
	printf("\nTotal prime numbers = %d\n",countPrimes(a,b));
	return 0;
}
countPrimes(int a, int b)
{
	if(a>b)
		return 0;
	if(isprime(b))
	{
		printf("%d  ",b);
		return 1 + countPrimes(a,b-1);
	}
	else
		return countPrimes(a,b-1);
}
int isprime(int n)
{
	int i; 
	for(i=2; i<=sqrt(n); i++)	
		if(n%i == 0)
		    return 0;
	return 1;
}