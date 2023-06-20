/*E7_28 Return nth triangular number*/
#include<stdio.h>
#include<math.h>
int func(int n);
int main(void)
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	printf("%d\n",func(n));
	return 0;
}
func(int n)
{
	if(n==1)
		return 1;
	return n + func(n-1);
}