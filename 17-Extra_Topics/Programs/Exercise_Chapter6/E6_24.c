/*E6.24*/
#include<stdio.h>
int func(int k);
int main(void)
{
	int i=0,k=3;
	i+=func(k);
	i+=func(k);
	i+=func(k);
	printf("%d\n",i);
	return 0;
}
int func(int k)
{
	static int m=2;
	m=m+k;
	return m;
}