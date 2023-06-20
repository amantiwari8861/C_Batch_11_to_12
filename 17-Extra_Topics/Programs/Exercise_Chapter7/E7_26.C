/*E7_26*/
#include<stdio.h>
long int fact(int num);
double power(float x,int n);
double series(float x,int n);
double rseries(float x,int n);
int main(void)
{
	float x;
	int n;
	printf("Enter x : ");
	scanf("%f", &x);
	printf("Enter number of terms : ");
	scanf("%d", &n);
	printf("Iterative  %lf\n",series(x,n));
	printf("Recursive  %lf\n",rseries(x,n));
	return 0;
}
long int fact(int num)
{
	int i;
	long int f=1;
	for(i=1; i<=num; i++)
		f=f*i;
	return f;
}
double power(float x,int n)
{
	int i;
	float p=1;
	for(i=1; i<=n; i++)
		p = p*x;
	return p;
}
double series(float x,int n)
{
	int i,j,sign=1;
	float term,sum=0;
	for(i=1; i<=n; i++)
	{
		sign = (i%2==0)?-1:1;
		j = 2*i-1;
		term = sign*power(x,j)/fact(j);
		sum+=term;
	}
	return sum;
}
double rseries(float x,int n)
{
	int sign=1;
	float term;
	if(n==0)
		return 0;
	sign = (n%2==0)?-1:1;
	term = sign * power(x,2*n-1)/fact(2*n-1);
	return term + rseries(x,n-1);
}
