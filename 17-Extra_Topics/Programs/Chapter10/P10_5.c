/*P10.5 strlen() function*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50];
	printf("Enter a string : ");
	gets(str);
	printf("Length of the string is  : %u\n",strlen(str));
	return 0;
}