/*P6.17*/
#include<stdio.h>
int reverse(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d\n",reverse(num));	
	return 0;
}
int reverse(int n)
{
	int rev=0;
	do
	{
		rev=rev*10+n%10;
		n/=10;
	}while(n>0);
	return rev;
}