/*E6.46*/
#include<stdio.h>
int sumPrDivisors(int i);
int main(void)
{
	int i,j;
	for(i=1; i<=2000; i++)
		for(j=1; j<=2000; j++)
			if( i!=j && sumPrDivisors(i)==j && sumPrDivisors(j)==i )
				printf("%d  %d\n",i,j);
	return 0;
}
int sumPrDivisors(int num)
{
	int i,s=0;
	for(i=1; i<=num/2; i++)
		if(num%i==0)
			s+=i;
	return s;
}