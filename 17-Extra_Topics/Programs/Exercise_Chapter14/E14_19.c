/*E14.19*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int count,x=0x1F,y=0xF1,z;
	displayBits(x);
	displayBits(y);
	count=0;
	for(z=x^y; z!=0; z=z&(z-1))	
		count++;
	printf("%d\n",count);
	
	count=0;
	for(z=x^y; z!=0; z>>=1)	
		count+=z&1;
	printf("%d\n",count);
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
