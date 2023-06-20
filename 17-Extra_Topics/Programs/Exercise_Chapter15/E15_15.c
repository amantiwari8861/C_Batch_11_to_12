/*E15.15*/
#include<stdio.h>
int func(void);
int main(void)
{
	int i=3;
	const int j=i;
	const int k=func();
	int *ptr=&k;
	const int m=*ptr;
	printf("%d\t%d\t%d\t%d\n",i,j,k,m);
	return 0;
}
int func(void)
{
	return 4;
}