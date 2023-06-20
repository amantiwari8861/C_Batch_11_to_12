/*P6.19*/
#include<stdio.h>
#include<math.h>
int isprime(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(isprime(num))
		printf("Number is prime\n");
	else
		printf("Number is not prime\n"); 
	return 0;
}
int isprime(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)	
		if(n%i==0)
		    return 0;
	return 1;
}
