/*P5.2 Program to print whether a number is even or odd */
#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num%2 == 0)		/*test for even */
		printf("Number is even\n");
	else
	{
		printf("Number is odd\n");
		num*=2;
		printf("Now the number is %d\n",num);	
	}
	return 0;
}