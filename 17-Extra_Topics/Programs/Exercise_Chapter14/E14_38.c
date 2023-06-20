/*E14.38*/
#include<stdio.h>
void displayBits(int x);
int func(int x);
int main(void)
{
	int x=0x123;
	displayBits(x);
	x=func(x);
	displayBits(x);
	return 0;
}
int func(int x)
{
    return x|(x+1);
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