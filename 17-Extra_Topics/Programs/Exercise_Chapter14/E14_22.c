/*E14.22*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned x,y,r,mask,i=9;
	
	x=0x123;
	y=0xffffff;
	mask=~0<<i+1;
	r=(x&~mask) | (y&mask);
	displayBits(x);
	displayBits(y);
	displayBits(r);
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