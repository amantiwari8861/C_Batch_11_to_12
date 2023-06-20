/*E14.39*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned x=0x12E;
	displayBits(x);
	displayBits(swap(x));
	return 0;
}
unsigned int swap(unsigned int x)
{
	return ((x & 0x55555555)<<1) | ((x & 0xAAAAAAAA)>>1);
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