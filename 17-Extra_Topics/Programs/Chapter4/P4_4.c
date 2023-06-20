/*P4.4 Program to understand the use of postfix increment/decrement*/
#include<stdio.h>
int main(void)
{
	int x=8;
	printf("x=%d\t",x);
	printf("x=%d\t",x++);	/*postfix increment*/
	printf("x=%d\t",x);
	printf("x=%d\t",x--);	/*postfix decrement*/
	printf("x=%d\n",x);
	return 0;
}
