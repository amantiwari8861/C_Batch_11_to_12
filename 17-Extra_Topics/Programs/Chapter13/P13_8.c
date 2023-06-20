/*P13.8*/
#include<stdio.h>
#define SWAP(dtype,x,y)  {	dtype t;  t=x, x=y, y=t; }
int main(void)
{
	int a=2, b=5;
	SWAP(int,a,b)
	printf("a=%d, b=%d\n",a,b);
	return 0;
}