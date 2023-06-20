/*P5.14 Program to print numbers from 1 to 10 using a do-while loop*/
#include<stdio.h>
int main(void)
{
	int i=1;
	do
	{
		printf("%d\t",i);
		i = i+1;
	}while(i<=10);
	printf("\n");
	return 0;
}