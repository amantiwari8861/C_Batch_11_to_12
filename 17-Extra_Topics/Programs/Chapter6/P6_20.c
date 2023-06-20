/*P6.20*/
#include<stdio.h>
#include<math.h>
void printPrimes(int num1,int num2);
int isprime(int n);
int main(void)
{
	int num1,num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("Prime number between %d and %d are : ",num1,num2);
	printPrimes(num1,num2);
	return 0;
}
void printPrimes(int num1, int num2)
{
    int i;
	for(i=num1; i<=num2; i++)
       if(isprime(i))
            printf("%d ",i);
}
int isprime(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)	
		if(n%i==0)
		    return 0;
	return 1;
}