/*P14.3*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int a, bit, mask, bitposition;	
	printf("Enter an integer : ");
	scanf("%d",&a);
	printf("Enter the bit position : ");
	scanf("%d", &bitposition);
	mask=1<<bitposition;
	printf("a=%d\n",a);	
	displayBits(a);
	if((a&mask)==0)
		bit=0;	
	else 
		bit=1;
	printf("The bit at position %d is %d\n",bitposition,bit);
	return 0;
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