/*P5.9 Program to print numbers in reverse order with a difference of 2*/
#include<stdio.h>
int main(void)
{
	int k=10;
	while(k>=2)
	{
		printf("%d\t",k);
		k=k-2;
	}
	printf("\n");
	return 0;
}