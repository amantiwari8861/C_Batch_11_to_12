/*E4.2*/
#include<stdio.h>
int main(void)
{
	int a=2,b=1,c,d;
	c = a<b;
	d = (a>b) && ( c<b);
	printf("c=%d, d=%d\n",c,d);
	return 0;
}