/*E4.6*/
#include<stdio.h>
int main(void)
{
	int x,y,z;
	x=8++;
	y=++x++;
	z=(x+y)--;
	printf("x=%d, y=%d, z=%d\n",x,y);
	return 0;
}