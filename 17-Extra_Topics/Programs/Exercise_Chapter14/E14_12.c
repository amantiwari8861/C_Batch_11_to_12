/*E14.12*/
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
	unsigned int i,r=0;  
	for(i=0; num!=0; i++)
	{ 		
		r=(r<<1)|num & 1; 
		num>>=1;
	}    
	r<<=32-i;  
	return r;
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