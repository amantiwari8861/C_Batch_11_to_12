/*P7.10 Program that tests whether a number is divisible by 11 and 9 or not*/
#include<stdio.h>
#include<math.h>
int divisibleBy9(long int x);
int divisibleBy11(long int x);

int main(void)
{
	long int num;
	printf("Enter the number to be tested : ");
	scanf("%ld", &num);
	
	if(divisibleBy9(abs(num)))
		printf("The number is divisible by 9\n");
	else
		printf("The number is not divisible by 9\n");
	
	if(divisibleBy11(abs(num)))
		printf("The number is divisible by 11\n");
	else
		printf("The number is not divisible by 11\n");
	return 0;
}/*End of main()*/

int divisibleBy9(long int n)
{
	int sumofDigits;
	if(n==9)
		return 1;
	if(n<9)
		return 0;
	sumofDigits=0;
	while(n>0)
	{
		sumofDigits += n%10;	
		n/=10;
	}
	return divisibleBy9(sumofDigits);
}/*End of divisibleBy9()*/

int divisibleBy11(long int n)
{
	int s1=0, s2=0,diff;
	if(n==0)
		return 1;
	if(n<10)
		return 0;	
	while(n>0)
	{
		s1+=n%10;
		n/=10;
		s2+=n%10;
		n/=10;
	}
	diff = s1>s2 ? (s1-s2) : (s2-s1); 
	return divisibleBy11(diff);
}/*End of divisibleBy11()*/
