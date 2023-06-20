/*E13_11*/
#include<stdio.h>
#define SWAP(dtype,x,y)  {	dtype t;  t=x+y, x=t-x, y=t-y;  }
int main(void)
{
	int a=1, b=2, x=3, y=4, s=25, t=26;
	SWAP(int,a,b)
	SWAP(int,x,y)
	SWAP(int,s,t)
	printf("a=%d, b=%d, x=%d, y=%d, s=%d, t=%d\n",a,b,x,y,s,t);
	return 0;
}
