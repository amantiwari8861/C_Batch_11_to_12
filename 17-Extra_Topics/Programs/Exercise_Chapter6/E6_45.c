/*E6.45*/
#include<stdio.h>
int sumPrDivisors(int i);
int main(void)
{
	int i;
	for(i=1; i<=10000; i++)
		if( sumPrDivisors(i)==i )
			printf("%d\n",i);
	return 0;
}
int sumPrDivisors(int num)
{
	int i,s=0;
	for(i=1;i<=num/2;i++)
		if(num%i==0)
			s+=i;
	return s;
}