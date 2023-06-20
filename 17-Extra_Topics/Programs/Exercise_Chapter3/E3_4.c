/*E3.3*/
#include<stdio.h>
#include<limits.h>
int main(void)
{
	int a=4000000000;
	unsigned int b=4000000000;
	printf("a=%d, b=%u\n",a,b);
	printf("%d, %u\n",INT_MAX,UINT_MAX);
	return 0;
}