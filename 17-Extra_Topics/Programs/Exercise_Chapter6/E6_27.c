/*E6.27*/
#include<stdio.h>
int func(void);
int main(void)
{
	int i;
	for(i=1; i<=6; i++)
		printf("%d  ",func());
	return 0;
}
int func(void)
{
	static int k=1;
	k*=2;
	return k;
}

