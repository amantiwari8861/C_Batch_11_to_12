/*P9.5 Postfix/prefix increment/decrement in a pointer variable of base type int*/
#include<stdio.h>
int main(void)
{
	int a=5;
	int *p;
	p = &a;
	printf("Value of p = Address of a = %p\n",p);
	printf("Value of p = %p\n",++p);
	printf("Value of p = %p\n",p++);
	printf("Value of p = %p\n",p);
	printf("Value of p = %p\n",--p);
	printf("Value of p = %p\n",p--);
	printf("Value of p = %p\n",p);
	return 0;
}