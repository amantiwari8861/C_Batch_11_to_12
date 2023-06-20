/*E14.31*/
#include<stdio.h>
unsigned mult(unsigned int x,unsigned int y);
int main(void)
{
	printf("%d\n",mult(9,8)); 
	return 0;
}
unsigned mult(unsigned int x,unsigned int y)
{
	unsigned z=0;
	while(y!=0)
	{
		if((y&1)!=0)
			z=z+x;
		x<<=1;
		y>>=1;
	}
	return z;
}

