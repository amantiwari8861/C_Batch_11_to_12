/*P9.1 Program to print address of variables using address operator*/
#include<stdio.h>
int main(void)
{
	int age=30;
	float salary=1500.50;
	printf("Address of age=%p\n",&age);
	printf("Address of salary=%p\n",&salary);
	return 0;
}