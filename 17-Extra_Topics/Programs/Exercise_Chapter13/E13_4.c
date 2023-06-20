/*E13_4*/
#include<stdio.h>
#define A  50
#define B  A+100
int main(void)
{
	int i,j;
	i=B/20;
	j=500-B;
	printf("i=%d,j=%d\n",i,j);
	return 0;
}