/*P6.1 Program to find the square root of a number*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double n,s;
	printf("Enter a number : ");
	scanf("%lf",&n);
	s=sqrt(n);
	printf("Square root of %.2lf is %.2lf\n",n,s);
	return 0;
}
