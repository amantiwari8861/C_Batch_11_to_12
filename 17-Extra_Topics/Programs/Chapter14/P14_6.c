/*P14.6 Clear rightmost 1 bit*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned n=140;
	displayBits(n);
	n=n&(n-1);  
	displayBits(n);
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