/*E6.47*/
#include<stdio.h>
int sumPrDivisors(int i);
void perfect_amicable(int x,int y);
int main(void)
{
	perfect_amicable(1,2000);
	return 0;
}
void perfect_amicable(int x,int y)
{
	int i,j;
	for(i=x; i<=y; i++)
		for(j=x; j<=y; j++)
			if( sumPrDivisors(i)==j && sumPrDivisors(j)==i )
			{
				if(i==j)
					printf("Perfect number : %d\n", i);
				else
					printf("Amicable numbers : %d  %d\n",i,j);
			}
}

int sumPrDivisors(int num)
{
	int i,s=0;
	for(i=1;i<=num/2;i++)
		if(num%i==0)
			s+=i;
	return s;
}