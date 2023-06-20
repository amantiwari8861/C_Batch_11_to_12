/*P6.9 Program that finds whether a number is even or odd*/
#include<stdio.h>
void find(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	find(num);
	return 0;
}
void find(int n)
{
	if(n%2==0)
		printf("%d is even\n",n);
	else
		printf("%d is odd\n",n);
}