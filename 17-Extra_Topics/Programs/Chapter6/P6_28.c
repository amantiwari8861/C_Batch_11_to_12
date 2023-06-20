/*P6.28 Sum of series*/
#include<stdio.h>
long int factorial(int n);
double power(float x,int n);
double series(float x,int n);
int main(void)
{
	float x;
	int n;
	printf("Enter x : ");
	scanf("%f",&x);
	printf("Enter number of terms : ");
	scanf("%d",&n);
	printf("%lf\n",series(x,n));
	return 0;
}
double series(float x,int n)
{
	int i,j,sign=1;
	float term,sum=0;
	for(i=1; i<=n; i++)
	{
		sign = (i%2==0)?-1:1;
		j=2*i-1;
		term=sign*power(x,j)/factorial(j);
		sum+=term;
	}
	return sum;
}
long int factorial(int n)
{
	int i;
	long int fact=1;
	if(n==0)
		return 1;
	for(i=n; i>1; i--)
		fact*=i;
	return fact;
}
double power(float x,int n)
{
	int i;
	float p=1;
	for(i=1; i<=n; i++)
		p=p*x;
	return p;
}