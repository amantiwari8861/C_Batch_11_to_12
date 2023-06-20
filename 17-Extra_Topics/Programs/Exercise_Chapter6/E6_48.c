/*E6.48*/
#include<stdio.h>
int isPrime(int n);
int sumPrDivisors(int i);
int main(void)
{
	int i;
	for(i=1; i<=100; i++)
		if( isPrime(i))
			printf("%d\t",i);
	return 0;
}
int isPrime(int n)
{
	 return sumPrDivisors(n)==1;
}
int sumPrDivisors(int num)
{
	int i,s=0;
	for(i=1; i<=num/2; i++)
		if(num%i==0)
			s+=i;
	return s;
}