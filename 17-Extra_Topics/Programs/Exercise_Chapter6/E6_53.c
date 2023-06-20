/*E6.53*/
#include<stdio.h>
double series(int n);
int main(void)
{
	int n;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	printf("%lf\n",series(n));
	return 0;
}
double series(int n)
{
	int i;
	double term,sum=0;
	for(i=1; i<=n; i++)
	{
		term=1.0/(i*i);/*should take 1.0 for floating point arithmetic*/
		sum+=term;
	}
	return sum;
}
