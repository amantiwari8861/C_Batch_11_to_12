/*P14.1*/
#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int a,b;
	printf("Enter values for a and b in hexadecimal: ");
	scanf("%x%x",&a,&b);  
	printf("a=%X\n",a); 	displayBits(a);
	printf("b=%X\n",b); 	displayBits(b);
	printf("a&b=%X\n",a&b); 	displayBits(a&b);
	printf("a|b=%X\n",a|b); 	displayBits(a|b);
	printf("a^b=%X\n",a^b); 	displayBits(a^b);
	printf("~a=%X\n",~a); 	displayBits(~a);
	printf("~b=%X\n",~b); 	displayBits(~b);
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
