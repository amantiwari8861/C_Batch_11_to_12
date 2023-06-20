/*P15.4 Program to understand automatic variables*/
#include<stdio.h>
int main(void)
{
	int x=3;
	printf("%d\t",x);
	{
		int x=10;
		printf("%d\t",x);
	}
	{
		int x=26;
		printf("%d\t",x);
	}
	printf("%d\n",x);
	return 0;
}
