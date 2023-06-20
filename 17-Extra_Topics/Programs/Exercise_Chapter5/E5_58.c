/*E5_58*/ 
#include<stdio.h>
int main(void)
{
	long x,y,z,num;
	printf("Enter a number : ");
	scanf("%d",&num);
	x=0; y=1;
	do
	{
		z = x+y;
		x = y;
		y = z;
	}while(z<num);
	
	if(z==num)
		printf("%d is a Fibonacci number\n",num);
	else
		printf("%d is not a Fibonacci number\n",num);
	return 0;
}