/*P4.9 Program to understand the sizeof operator*/
#include<stdio.h>
int main(void)
{
	int var;
	printf("Size of int=%u\n",sizeof(int));
	printf("Size of float=%u\n",sizeof(float));
	printf("Size of var=%u\n",sizeof(var));
	printf("Size of an integer constant=%u\n",sizeof(45));  
	return 0;
}