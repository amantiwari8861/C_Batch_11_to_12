/*P5.27 Program to understand the use of break*/
#include<stdio.h>
int main(void)
{
	int n;	
	for(n=1; n<=5; n++)
	{
		if(n==3)
			break;
		printf("Number=%d\n",n);
	}
	printf("Out of for loop\n");
	return 0;
}
