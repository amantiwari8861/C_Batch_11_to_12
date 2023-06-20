/*E14.43*/
#include<stdio.h>
void displayBits(int a);
unsigned func(int x);
int main(void)
{
	unsigned x=0xFA2E4;
	displayBits(x);
	displayBits(func(x));
	return 0;
}
unsigned func(int x)
{
	x = ((x&0x55555555) << 1) | ((x&0xaaaaaaaa) >> 1);
	x = ((x&0x33333333) << 2) | ((x&0xcccccccc) >> 2);
	x = ((x&0x0f0f0f0f) << 4) | ((x&0xf0f0f0f0) >> 4);
	x = ((x&0x00ff00ff) << 8) | ((x&0xff00ff00) >> 8);
	x = ((x&0x0000ffff) << 16)  | ((x&0xffff0000) >> 16);
	return x;
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x & mask)?'1':'0'); /*Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}