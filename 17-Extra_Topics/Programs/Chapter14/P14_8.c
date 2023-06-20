/*P14.8 Count Set bits*/
#include<stdio.h>
void displayBits(int x);
int count_setbits1(unsigned x);
int count_setbits2(unsigned x);
int count_setbits3(unsigned x);
int count_setbits4(unsigned x);
int main(void)
{
	unsigned x=1124;
	displayBits(x);
	printf("%d\n",count_setbits1(x));
	printf("%d\n",count_setbits2(x));
	printf("%d\n",count_setbits3(x));
	printf("%d\n",count_setbits4(x));
	return 0;
}

int count_setbits1(unsigned x)  
{
	int count=0,mask,i;
	for(i=0; i<32; i++)
	{
		mask=1<<i;
		if((x&mask)!=0) /*Check ith bit*/
			count++;
	}
	return count;
}

int count_setbits2(unsigned x)
{
	int count=0;
	while(x!=0)
	{
		if((x&1)!=0)/*If lowest order bit is 1*/
			count++;
		x>>=1; /*Shift x right*/
	}
	return count;
}
int count_setbits3(unsigned x)
{
	int count=0;
	while(x!=0)	
	{
		count++;
		x=x&(x-1);  /*Clear the rightmost 1-bit*/
	} 
	return count;
}

int table[]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
int count_setbits4(unsigned x)
{
	int count=0;
	while(x!=0)
	{
		count=count+table[x & 0xF];
		x=x>>4;
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