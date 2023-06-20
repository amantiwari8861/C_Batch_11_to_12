/*P5.16 Program to find the sum of numbers entered*/
#include<stdio.h>
int main(void)
{
	int num,sum=0;
	do
	{
		printf("Enter a number (enter 0 to stop) : ");
		scanf("%d",&num);
		sum+=num;
	}while(num!=0);
	printf("Sum is %d\n",sum);
	return 0;
}