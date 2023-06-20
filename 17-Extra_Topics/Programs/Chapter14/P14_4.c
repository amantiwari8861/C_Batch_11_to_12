/*P14.4 Printing the binary pattern of an integer*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int  x;
	printf("Enter an integer  : ");
	scanf("%d",&x);
	displayBits(x);
	return 0;
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x & mask)?'1':'0'); /*Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}