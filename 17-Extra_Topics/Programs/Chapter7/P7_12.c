/*P7.12 Program to find the factorial of a number by tail recursion*/
#include<stdio.h>
long TailRecursiveFact(int n);
long TRfact(int n, int result);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num<0)
		printf("No factorial for negative number\n");
	printf("Factorial of %d is %ld\n", num, TailRecursiveFact(num));
	return 0;
}
/*Tail recursive*/
long TRfact(int n, int result)
{
	if(n==0)
		return result;
	return TRfact(n-1, n*result);
}/*End of TRFact()*/

/*Helper function for tail recursive function*/
long TailRecursiveFact(int n)
{
	return TRfact(n,1);
}/*End of TailRecursiveFact()*/