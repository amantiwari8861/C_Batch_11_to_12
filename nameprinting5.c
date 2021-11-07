#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[20],name2[20];
	printf("enter the name\n");
	gets(name);
	fflush(stdin);
	gets(name2);
	printf("length :%d\n",strlen(name));
	printf(" ");
	puts(name);
	return 0;
}