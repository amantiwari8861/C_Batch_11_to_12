/*P10.30 Program to test whether a string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50];
	int i,j;
	printf("Enter a string : ");
	gets(str);
	for(i=0,j=strlen(str)-1; i<=j; i++,j--)
		if(str[i]!=str[j])
			break;
	if(i>j)
		printf("String is a palindrome\n" );
	else
		printf("String is not a palindrome\n" );
	return 0;
}
