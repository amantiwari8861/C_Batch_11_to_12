/*E14.28*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int x=0x12E8;
	displayBits(x);
	x = x & ~(x-1);
	displayBits(x);

	x=0x12E8;
	displayBits(x);
	x = x & -x; /*in two's complement machine*/
	displayBits(x);
	return 0;
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
