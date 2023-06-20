/*E14.21*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned int x=103145, p=7, n=5;
	displayBits(x);
	x=func(x,p,n);		
	displayBits(x);
	return 0;
}
unsigned int func(unsigned int x, int p, int n)
{
	return  (x>>(p+1-n)) & ~(~0<<n) ; 
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