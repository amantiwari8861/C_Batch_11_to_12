/*E14.16*/
#include<stdio.h>
int main(void)
{
	unsigned x=1434,y=32,r;
	r=x&(y-1);
	printf("%d  %d",x%y,r);
	return 0;
}
