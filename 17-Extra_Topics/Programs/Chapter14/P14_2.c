/*P14.2*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int a=7;
	printf("a=%d\t",a); displayBits(a);
	a=a<<2;
	printf("a=%d\t",a); displayBits(a);
	a=a<<3;
	printf("a=%d\t",a); displayBits(a);
	a=a>>1;
	printf("a=%d\t",a); displayBits(a);
	a=a>>3;
	printf("a=%d\t",a); displayBits(a);
	return 0;
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask=1<<i;
		putchar((x & mask)?'1':'0'); /*Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}
