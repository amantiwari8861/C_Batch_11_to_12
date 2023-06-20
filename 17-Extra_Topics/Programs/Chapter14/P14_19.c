/*P14.19*/
#include<stdio.h>
unsigned int reverse(unsigned int num);
void displayBits(int x);
int main(void)
{     
	unsigned int x=234242156;
	displayBits(x);
	displayBits(reverse(x));
	return 0;
} 
unsigned int reverse(unsigned int num)
{
    unsigned int i,rev=0;
    for(i=0; i<32; i++)
         if((num & (1<<i)))/* test ith bit of num*/
           rev=rev | (1<<(31-i)); /*set (31-i)th bit of rev equal to ith bit of num*/
    return rev;
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
