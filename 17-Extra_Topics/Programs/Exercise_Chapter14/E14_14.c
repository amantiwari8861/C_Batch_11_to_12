/*E14.14*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	unsigned int x=0x123F4;
	displayBits(x);

	printf("(i) Set most significant bit\n");	
	x|=(1<<31);	displayBits(x);

    printf("(ii) Clear most significant bit\n"); 
	x&=~(1<<31);	displayBits(x);
	
	printf("(iii) Invert all bits\n"); 
	x^=~0;		displayBits(x);
    
	printf("(iv) Set all bits\n");	
	x|=~0;	displayBits(x);
	
	printf("(v) Invert least significant byte\n");	
	x^=0xFF;  displayBits(x);
	
	printf("(vi) Invert all bits at even positions 0,2,4,6,8..\n");	
	x^=0x55555555;displayBits(x);
	
	printf("(vii) Invert all bits at odd positions 1,3,5,7,9..\n");	
	x^=0xAAAAAAAA;displayBits(x);
    
	printf("(viii) Clear all bits at even positions 0,2,4,6,8..\n");	
	x&=0xAAAAAAAA;displayBits(x);
	
	printf("(ix) Clear all bits at odd positions 1,3,5,7,9..\n");	
	x&=0x55555555;displayBits(x);
	
	printf("\n\n");
	x=0x123FF;
	displayBits(x);
	printf("(x)Insert 3 trailing zeros \n");	
	x=(x>>3)<<3;	displayBits(x);
	
	printf("(xi) Find if every bit is set \n");	
	(x^~0) ? printf("Not all Set\n"): printf("All Set\n");
	(x&~0)==~0 ? printf("All Set\n"): printf("Not all Set\n");
	
	printf("\n\n");	
	x=4;
	printf("x=%d\n",x);	
	printf("(xii) Multiply by 7\n");	
	x=(x<<3)-x;	
	printf("x=%d\n",x);	
	
	printf("(xiii) Multiply by 9\n");	
	x=(x<<3)+x;	
	printf("x=%d\n",x);	
	
	printf("(xiv) Multiply by 3.5\n");	
	x=((x<<3)-x)>>1;	
	printf("x=%d\n",x);
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
