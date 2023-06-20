/*E14.24*/
#include<stdio.h>
unsigned set(int x,int i,int j);
void displayBits(int x);
int main(void)
{
	unsigned x=0x23172b0;
	displayBits(x);
	x=set(x,3,7);
	displayBits(x);
	return 0;
}
unsigned set(int x,int i,int j)
{
    int mask=0,p;
	for(p=i; p<j; p++) 
		mask=mask | 1<<p;
	return x|mask;
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

