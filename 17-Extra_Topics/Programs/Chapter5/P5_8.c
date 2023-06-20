/*P5.8 Program to print numbers from 1 to 10 using while loop*/
#include<stdio.h>
int main(void)
{
	int i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		i = i+1;		/*Statement that changes the value of condition*/
	}
	printf("\n");
	return 0;
}
