/*P5.25 Program to print Armstrong numbers*/
#include<stdio.h>
int main(void)
{
	int num,n,cube,d,sum;
	printf("Armstrong numbers are :\n");

	for(num=100; num<=999; num++)	/*outer loop to generate numbers*/
	{
		n=num;
		sum=0;
		while(n>0)	/*inner loop to calculate sum of cube of digits*/
		{
			d=n%10;
			n/=10;
			cube=d*d*d;
			sum=sum+cube;
		}/*End of while loop*/
		if(num==sum)	
			printf("%d\n",num);
	}/*End of for loop*/
	return 0;
}