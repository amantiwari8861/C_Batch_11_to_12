/*E14.9*/
#include<stdio.h>
int main(void)
{
	int i,num=0x1A3B;
	unsigned int mask=1<<31;  
	for(i=31; i>=0; i--)
	{
		(num & mask) ? printf("1") : printf("0");
		mask=mask>>1;
	}
	return 0;
}
     
