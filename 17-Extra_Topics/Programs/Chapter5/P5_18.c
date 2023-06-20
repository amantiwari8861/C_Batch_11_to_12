/*P5.18 Program to print numbers in reverse order with a difference of 2*/
#include<stdio.h>
int main(void)
{
	int k;
	for(k=10; k>=2; k-=2)
		printf("%d\t",k);
	printf("\n");
	return 0;
}