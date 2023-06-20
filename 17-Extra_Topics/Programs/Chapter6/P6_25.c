/*P6.25 Pascal’s triangle*/
#include<stdio.h>
long factorial(int);
long comb(int,int);
int main(void)
{
	int i,j,k;
	printf("Enter number of rows  for Pascal's triangle : ");
	scanf("%d",&k);
	for(i=0; i<k; i++)
	{
		for(j=0; j<=i; j++)
			printf("%5ld",comb(i,j));
		printf("\n");
	}
	return 0;
}
long comb(int n,int r)
{
	long c;
	c=factorial(n)/(factorial(r)*factorial(n-r));
	return c;
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