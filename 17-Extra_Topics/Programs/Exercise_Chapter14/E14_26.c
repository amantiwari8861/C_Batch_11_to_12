/*P14.26*/
#include<stdio.h>
void displayBits(int x);
int increment(int x);
int decrement(int x);
int main(void)
{
	int a=79,b=20;
	displayBits(a);
	a=increment(a);
	displayBits(a);
	
	printf("\n");
	
	displayBits(b);
	b=decrement(b);
	displayBits(b);
	printf("%d  %d\n",a,b);
	return 0;
}
int increment(int x)
{
	int i;
	for(i=0; (x&(1<<i))!=0; i++)
		x=x^(1<<i);
	x=x^(1<<i);
	return x;
}
int decrement(int x)
{
	int i;
	for(i=0; (x&(1<<i))==0; i++)
		x=x^(1<<i);
	x=x^(1<<i);
	return x;
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
