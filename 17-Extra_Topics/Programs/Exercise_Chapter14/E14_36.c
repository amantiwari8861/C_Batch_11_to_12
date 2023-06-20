/*E14.36*/
#include<stdio.h>
void displayBits(int x);
unsigned nextHighestPow2(unsigned int n);
int main(void)
{
	unsigned n=250,x;
    displayBits(n);
	x=nextHighestPow2(n);
	displayBits(x);
	printf("%d\n",x);
	return 0;
}
unsigned nextHighestPow2(unsigned int n)
{
	n--;
	n|=n>>1;
	n|=n>>2;
	n|=n>>4;
	n|=n>>8;
	n|=n>>16;
	n++;
	return n;
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