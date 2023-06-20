/*E14.23*/
#include<stdio.h>
void displayBits(int x);
unsigned clear(unsigned x,int i,int j);
int main(void)
{
	unsigned x = 0x23173b4;
	displayBits(x);
	x = clear(x,3,7) ;
	displayBits(x);
	return 0;
}
unsigned clear(unsigned x,int i,int j) 
{
	unsigned mask = ~0<<(j+1) | (1<<i)-1;
	return x&mask;
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
