/*P5.15 Program to count digits in a number */
#include<stdio.h>
int main(void)
{
	int n,count=0,rem;
	printf("Enter a number : ");
	scanf("%d",&n);
	do
	{
		n/=10;		
		count++;
	}while(n>0);
	printf("Number of digits=%d\n",count);
	return 0;
}