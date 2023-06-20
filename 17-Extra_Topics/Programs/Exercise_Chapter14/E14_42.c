/*E14.42*/
#include<stdio.h>
void displayBits(int a);
unsigned reverseBytes(unsigned x);
int main(void)
{
	unsigned x = 0xFA12CD04;
	displayBits(x);
	displayBits(reverseBytes(x));
	return 0;
}
unsigned reverseBytes(unsigned x)
{
	return (x>>24) | ((x & 0xFF0000)>>8) | ((x & 0xFF00)<<8) | (x<<24);
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