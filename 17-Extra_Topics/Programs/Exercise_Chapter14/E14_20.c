/*E14.20*/
#include<stdio.h>
void displayBits(int x);
#include<math.h>
int main(void)
{
	int mask,p=7,n=4,x=103145;
	
	displayBits(x);
	if(n<0)
		mask = ~(~(~0<<abs(n))<<p);  
	else
        mask = ~(~(~0<<n)<<p-n+1);
	displayBits(mask);
	x=x&mask;
	displayBits(x);

	p=7,n=-4,x=103145;
	displayBits(x);
	if(n<0)
		mask = ~(~(~0<<abs(n))<<p);  
	else
        mask = ~(~(~0<<n)<<p-n+1);
	displayBits(mask);
	x=x&mask;
	displayBits(x);
	return 0;
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