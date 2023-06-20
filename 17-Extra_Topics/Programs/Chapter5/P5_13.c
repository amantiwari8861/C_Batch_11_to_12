/*P5.13 Program to convert a binary number to a decimal number*/
#include<stdio.h>
int main(void)
{
	int n,nsave,rem,d,j=1,dec=0;
	printf("Enter the number in binary : ");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem=n%10;	/*taking last digit of n*/
		d=rem*j;
		dec+=d;
		j*=2;
		n/=10;		/*skipping last digit of n*/
	}
	printf("Binary number = %d, Decimal number = %d\n",nsave,dec);
	return 0;
}