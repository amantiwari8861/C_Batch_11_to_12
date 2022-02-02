#include<stdio.h>
int main()
{
	int i;
	char name[20],name2[20];
	printf("enter the name\n");
	gets(name);//harmful for our program
	fflush(stdin);
	fgets(name2,20,stdin);//safe for our program
//fgets is used to read string from many places like file,keyboard,network etc
	puts(name);
	puts(name2);
	return 0;
}