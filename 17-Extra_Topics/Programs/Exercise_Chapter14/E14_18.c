/*E14.18*/
#include<stdio.h>
void displayBits(int x);
int count_setbits2(unsigned x);
int main(void)
{
	unsigned x=1034,y=1083;
	displayBits(x);
	displayBits(y);
	printf("%d\n",count_setbits2(x^y));
	return 0;
}
int count_setbits2(unsigned x)
{
	int count=0;
	while(x!=0)	
	{
		count++;
		x=x&(x-1);  
	}
	return count;
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