/*P5.4 Program to find quotient and remainder*/
#include<stdio.h>
int main(void)
{
	int x,y,quo,rem;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	if(y)  /*if y is non-zero*/
	{
		quo=x/y; 
		rem=x%y;
		printf("Quotient=%d, Remainder=%d\n",quo,rem);
	} 
	else
		printf("Divide by zero error\n");
	return 0;
}
