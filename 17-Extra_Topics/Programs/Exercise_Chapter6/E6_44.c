/*E6.44*/
#include<stdio.h>
int sumPrDivisors(int i);
int main(void)
{
	int i;
	printf("Enter i : ");
	scanf("%d",&i);
	printf("%d\n",sumPrDivisors(i));
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