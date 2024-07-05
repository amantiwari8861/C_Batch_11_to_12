#include<stdio.h>
int main()
{
	int i;
	char name[20],name2[20];
	// printf("enter the name1\n");
	// gets(name);//it is harmful so don't use it
	printf("enter the name2\n");
	fgets(name2,20,stdin);//it always takes \n at end of input
	// printf("\n\tthe names are :\n");
	puts("hiii");
	// puts(name);
	// puts(name2);
	fputs(name2,stdout);
	printf(" the name is %s.",name2);
	return 0;
}