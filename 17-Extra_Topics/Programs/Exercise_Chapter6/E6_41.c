/*E6.41 Program to print Armstrong numbers*/
#include<stdio.h>
void PrintArmstrong(void);
int isArmstrong(int num);
int cubesum(int n);
int main(void)
{
	int num;
	
	printf("Armstrong numbers are :\n");
	PrintArmstrong();

	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(isArmstrong(num))
		printf("%d is an Armstrong number\n",num);
	else
		printf("%d is not an Armstrong number\n",num);
	return 0;
}
void PrintArmstrong(void)
{
	int num;
	for(num=100; num<=999; num++)	
		if(num==cubesum(num))
			printf("%d\n",num);
}
int isArmstrong(int num)
{
	if(num==cubesum(num))
		return 1;
	else
		return 0;
}
int cubesum(int n)
{
		int d,cube,sum=0;
		while(n>0)	
		{
			d = n%10;
			n/=10;
			cube = d*d*d;
			sum = sum+cube;
		}
		return sum;
}