/*E6.15*/
#include<stdio.h>
int square1(int a);
int square2(double a);
double square3(int a);
double square4(double a);
int main(void)
{
	double x=2.5,y;
	y=square1(x);
	printf("%lf\t",y);
	y=square2(x);
	printf("%lf\t",y);
	y=square3(x);
	printf("%lf\t",y);
	y=square4(x);
	printf("%lf\n",y);
	return 0;
}
int square1(int a)
{
	return a*a;
}
int square2(double a)
{
	return a*a;
}
double square3(int a)
{
	return a*a;
}
double square4(double a)
{
	return a*a;
}
