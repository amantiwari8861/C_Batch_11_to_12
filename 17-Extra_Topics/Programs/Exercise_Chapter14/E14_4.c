/*E14.4*/
#include<stdio.h>
int main(void)
{
	int x=0x1F;
	x<<2;
	printf("%X  ",x);
	x>>2;
	printf("%X\n",x);
	return 0;
}