/*E6.54*/
#include<stdio.h>
#include<math.h>
int isprime(int n);
void PrintTwinPrimes(int x);
void PrintTwinPrimes1(int x);

int main(void)
{
	PrintTwinPrimes(1000);
	PrintTwinPrimes1(1000);
	return 0;
}

void PrintTwinPrimes(int n)
{
	int i;
	for(i=3; i<n; i=i+2)
	{
		if(isprime(i) && isprime(i+2) )
			printf("%5d %5d\n",i,i+2);
	}
}

/*isprime() callled lesser times in this function*/
void PrintTwinPrimes1(int n)
{
	int i,flag=1;	
	for(i=3; i<n; i=i+2)
	{
			if(isprime(i+2))  
			{
				if(flag==1)
					printf("%5d %5d\n",i,i+2);
				else
					flag=1;
			}
			else
				flag=0;
	}
}	

int isprime(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)	
		if(n%i==0)
		    return 0;
	return 1;
}
