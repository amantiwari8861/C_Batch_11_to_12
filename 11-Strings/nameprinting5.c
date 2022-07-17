#include<stdio.h>
int main()
{
	int i;
	char name[20],name2[20];
	printf("enter the name1\n");
	gets(name);//harmful for our program
	// fflush(stdin);
	// fgets(name,20,stdin);//safe for our program
	// fflush(stdin);
	printf("enter the name2\n");
	fgets(name2,20,stdin);//safe for our program
//stdin is an pre-defined object of standard input which is used to take input from keyboard
//fgets is used to read string from many places like file,keyboard,network etc
	printf("\n\tthe names are :\n");
	puts(name);
	puts(name2);
	return 0;
}