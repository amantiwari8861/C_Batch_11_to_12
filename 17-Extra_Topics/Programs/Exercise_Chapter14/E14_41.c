/*E14.41*/
#include<stdio.h>
void displayBits(int x);
unsigned swapBytes(unsigned x);
int main(void)
{
	unsigned x = 0x15F93A7;
	displayBits(x);
	displayBits(swapBytes(x));
	return 0;
}
unsigned swapBytes(unsigned x)
{
	return ((x & 0x00ff00ff) << 8) | ((x & 0xff00ff00) >> 8);
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x & mask)?'1':'0'); /* Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}