#include<stdio.h>
int main()
{
	int i;
	char name[20],name2[20];
	printf("enter the name1\n");
	gets(name);
	printf("enter the name2\n");
	fgets(name2,20,stdin);
	printf("\n\tthe names are :\n");
	puts(name);
	puts(name2);
	fputs(name2,stdout);
	printf(" the name is %s ",name);
	return 0;
}