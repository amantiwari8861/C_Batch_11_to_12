/*P10.29 Program to enter a string and print it in reverse order*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50];
	int len;
	printf("Enter a string : ");
	gets(str);
	
	for(len=strlen(str)-1; len>=0; len--)
			printf("%c",str[len]);
	return 0;
}