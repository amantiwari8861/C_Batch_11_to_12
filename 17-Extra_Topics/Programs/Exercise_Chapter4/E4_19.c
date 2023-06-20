/*E4.19*/
#include<stdio.h>
int main(void)
{
	int a=2,b=2,x,y;
	x = 4*(++a * 2 + 3);
	y = 4*(b++ * 2 + 3 );
	printf("a=%d, b=%d, x=%d, y=%d\n",a,b,x,y);
	return 0;
}
