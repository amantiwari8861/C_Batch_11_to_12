/*P13.9*/
#include<stdio.h>
#define SWAP(dtype,x,y)  {	dtype t;  t=x, x=y, y=t; }
int main(void)
{
	int s=2,t=5;
	SWAP(int,s,t)
	printf("s=%d, t=%d\n",s,t);
	return 0;
}
