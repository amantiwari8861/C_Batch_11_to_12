/*E14.30*/
#include<stdio.h>
void displayBits(int x);
unsigned parity(int x);
int main(void)
{
	unsigned int n=67;
	displayBits(n);
	printf("%d\n",parity(n));
	return 0;
}
unsigned parity(int x)
{
    unsigned parity=0;  
	while(x)
	{
		parity=!parity;
		x=x&(x-1);
	}
	return parity;
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
