/*E6.43*/
#include<stdio.h>
int MDR(long int num);
int mPersistence(long int num);
int ProdDigits(long int num);
int main(void)
{
	long int num;
	printf("Enter a number : ");
	scanf("%ld",&num);
	printf("Multiplicative Digital root of %d is %d\n",num,MDR(num));
	printf("Persistence of %d is %d\n",num,mPersistence(num));
	return 0;
}
int MDR(long int num)
{
	while(num>9)/*while num is more than one digit*/	
		num=ProdDigits(num);
	return num;
}
int mPersistence(long int num)
{
	int per=0;
	while(num>9)/*while num is more than one digit*/	
	{
		per++;
		num=ProdDigits(num);	
	}
	return per;
}
int ProdDigits(long num)
{
	int prod=1,dig;
	do
	{
		dig=num%10;
		prod*=dig;
		num/=10;
	}while(num>0); 
	return prod;
}
