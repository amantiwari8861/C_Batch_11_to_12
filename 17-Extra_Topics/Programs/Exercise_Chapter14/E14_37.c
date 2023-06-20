/*E14.37*/
#include<stdio.h>
int leadingZeros(int x);
int count_setbits(x);
int rightProp(int n);
int main(void)
{
	int x=0xFF;
	printf("%d\n",leadingZeros(x));
	return 0;
}
int leadingZeros(int x)
{
	x=rightProp(x);
	return count_setbits(~x);
}
int rightProp(int n)
{
    n|=n>>1;
	n|=n>>2;
	n|=n>>4;
	n|=n>>8;
	n|=n>>16;
	return n;
}
int count_setbits(int x)
{
	int count=0;
	while(x!=0)	
	{
		count++;
		x=x&(x-1);  
	} 
	return count;
}