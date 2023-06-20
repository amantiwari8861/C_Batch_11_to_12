/*P14.17*/
#include<stdio.h>
void displayBits(int x);
int rotate_right1(int num, int n);
int rotate_right2(int num, int n);
int rotate_left1(int num, int n);
int rotate_left2(int num, int n);
int main(void)
{
	int num,n,i,bit;
	printf("Enter the number to be rotated : ");
	scanf("%d",&num);
	printf("Enter the number of rotations: ");
	scanf("%d",&n);
	n%=32;		
	displayBits(num);
	printf("\n");
	displayBits(rotate_right1(num,n));
	displayBits(rotate_right2(num,n));
	displayBits(rotate_left1(num,n));
	displayBits(rotate_left2(num,n));
	return 0;
}
int rotate_right1(int num, int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(num&1)  		/* Test LSB */  
			num=(num>>1) | (1<<31);  		/*Switch on MSB*/
		else
			num=(num>>1) & ~(1<<31); 	/*Switch off MSB*/
	}
	return num;
}
int rotate_left1(int num, int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(num & (1<<31))	/*Test MSB*/
			num=(num<<1) | 1;  	/*Switch on LSB*/
		else
			num=(num<<1) & ~1; 	/*Switch off LSB*/
	}
	return num;
}
int rotate_right2(int num, int n)
{
	return (num>>n)|(num<<(32-n)); 
}
int rotate_left2(int num , int n)
{
 	return (num<<n) | (num>>(32-n)); 
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