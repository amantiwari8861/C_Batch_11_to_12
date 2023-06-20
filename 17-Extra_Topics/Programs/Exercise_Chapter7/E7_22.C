/*E7_22*/
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("%d\n",pow(a,b));
	return 0;
}
int pow(int a, int n)
{
	if (n==0) 
		return 1;
	else if (n%2==0) 
		return pow(a*a, n/2);
	else 
		return a * pow(a*a, (n-1)/2);
}