/*P14.20 Program to convert a binary pattern to an integer*/
#include<stdio.h>
int main(void)
{
	char bit;
	int i, num = 0;

	printf("Enter any bit pattern less than or equal to 32 bits :\n");
	for(i=0; i<=31; i++)
	{
		bit=getchar();
		if(bit=='0')
			num=num<<1;
		else if(bit=='1')
			num=(num<<1)+1;
		else
			break;
	}
	printf("Hexadecimal : %x\n", num);
	printf("Decimal : %d\n", num);
	return 0;
}