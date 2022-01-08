#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[20],name2[20];
	printf("enter the name\n");
	gets(name);//harmful for our program
	fflush(stdin);
	gets(name2);
	// printf("length :%d\n",strlen(name));
	// printf("length :%d\n",strlen(name2));
	puts(name);
	puts(name2);
	return 0;
}