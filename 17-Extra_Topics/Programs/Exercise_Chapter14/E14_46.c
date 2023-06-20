/*E14.46*/
#include<stdio.h>
void displayBits(int x);
int convertToBCD(int n);
int convertToBinary(int bcd);
int main(void)
{
	int bcd,bin;
	
	printf("Enter a number :");
	scanf("%d",&bin);

	displayBits(bin);
	bcd=convertToBCD(bin);

	displayBits(bcd);
	bin=convertToBinary(bcd);

	displayBits(bin);
	return 0;
}

int convertToBCD(int n)
{
	int rem,i,bcd=0;	
	for(i=0; n>0; i++)
	{
		rem=n%10;	/*taking last digit of number*/
		bcd = bcd | ( (rem & 0xF)<< i*4 );
		n/=10;		/*skipping last digit*/
	}
	return bcd;
}

int convertToBinary(int bcd)
{
	int i,bin=0,d=1;
	for(i=0; i<32; i+=4)
	{
		bin+=d*(bcd>>i & 0xF);
		d*=10;
	}
	return bin;
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