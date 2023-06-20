/*P6.24 Program to find out permutations and combinations*/
#include<stdio.h>
long factorial(int);
long perm(int,int);
long comb(int,int);
int main(void)
{
	int n,r;
	printf("Enter n and r: ");
	scanf("%d%d",&n,&r);
	printf("Total combinations are : %ld\n",comb(n,r));
	printf("Total permutations are : %ld\n",perm(n,r));
	return 0;
}
long comb(int n,int r)
{
	long c;
	c=perm(n,r)/factorial(r);
	return c;
}
long perm(int n,int r)
{
	long p;
	p=factorial(n)/factorial(n-r) ;
	return p;
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