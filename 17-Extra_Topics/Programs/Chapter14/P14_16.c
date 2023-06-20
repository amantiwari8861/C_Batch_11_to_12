/*P14.16*/
#include<stdio.h>
unsigned nextHighestPow2(unsigned int n);
void displayBits(int x);
int main(void)
{
	unsigned n=600;
	printf("%d\n",(n));
	displayBits(n);
	displayBits(nextHighestPow2(n));
	printf("%d\n",nextHighestPow2(n));
	return 0;
}
unsigned nextHighestPow2(unsigned int n)
{
	int i;
	if(n && !(n&(n-1)))/*if n is exact power of 2, see P14.7*/
		return n;
	i=-1;
	while(n!=0)
	{
		n>>=1;
		i++;
	}     
	return 1<<i+1;

}     
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask=1<<i;
		putchar((x&mask)?'1':'0'); /*Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}