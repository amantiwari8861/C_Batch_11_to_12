/*E14.2*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned int x,y,z;
	displayBits(0xFFFF);
	x=y=z=0xFFFF;
	x=(x>>5)<<5;	displayBits(x);
	y=(y>>3)<<3;	displayBits(y);
	z=(z>>2)<<2;	displayBits(z);
	return 0;
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
