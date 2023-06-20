/*P5.28 Program to find whether a number is prime or not*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i=2; i<=sqrt(n); i++)	
		if(n%i==0)
			break;

	if(i>sqrt(n))
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);
	return 0;
}