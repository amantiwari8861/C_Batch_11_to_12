/*E14.40*/
#include<stdio.h>
void displayBits(int x);
unsigned swap4Bits(int x);
int main(void)
{
	unsigned x=0x15F93A7;
	displayBits(x);
	displayBits(swap4Bits(x));
	return 0;
}
unsigned swap4Bits(int x)
{
	return ((x & 0x0F0F0F0F)<<4) | ((x & 0xF0F0F0F0)>>4);
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