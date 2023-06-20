/*P14.9 To set,clear,invert n bits starting from position p in a number x*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int mask,p,n,x;
	p=7,n=4;
	mask=~(~0<<n)<<p-n+1; 

	x=10345;	
	displayBits(x); 	
	x=x|mask;	/*Set*/
	displayBits(x);
		
	x=10345;	
	displayBits(x);	
	x=x&~mask;	/*Clear*/
	displayBits(x);
		
	x=10345;	
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