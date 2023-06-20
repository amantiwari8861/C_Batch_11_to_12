/*P14.15 Program to print the two’s complement of a number*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int num,i,mask;
	printf("Enter a number : ");
	scanf("%d",&num);
	displayBits(num);
	printf("Two's complement is : \n");
	displayBits(~num+1);

	for(i=0; i<=31; i++)    
	{
		mask=1<<i;
		if((num & mask)!=0)	  /*Find a bit with value 1*/
			break;
	}
	for(i=i+1; i<=31; i++)
	{
		mask = 1<<i;
		num = num ^ mask;	/*Invert the bit*/
	}
	printf("Two's complement is : \n");
	displayBits(num);
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
