/*E14.13*/
#include<stdio.h>
unsigned int func(unsigned int x);
void displayBits(int x);
int main(void)
{
	unsigned int x=0x1AE3;
	displayBits(x);
	x=func(x);
	printf("%X\n",x);
	displayBits(x);
	return 0;
}
unsigned int func(unsigned int num)
{
	unsigned int lmask,rmask,mask;
	lmask=1<<31;				
	rmask=1;
	while(lmask > rmask)
	{
		mask=lmask|rmask;
		if((num&mask)!=0 && (num&mask)!=mask)
			num^=mask; 
		lmask>>=1;
		rmask<<=1;
	}
	return num;
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