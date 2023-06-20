/*P14.13*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int mask,i=2,j=7,x;

	mask=~(~0<<j-i+1)<<i;
	
	x=103145;
	displayBits(x); 
	x=x|mask;	/*Set*/
	displayBits(x);
		
	x=103145;
	displayBits(x);	
	x=x&~mask;	/*Clear*/
	displayBits(x);
		
	x=103145;
	displayBits(x);	
	x=x^mask;	/*Invert*/
	displayBits(x);
	return 0;
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask=1<<i;
		putchar((x & mask)?'1':'0'); /* Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}