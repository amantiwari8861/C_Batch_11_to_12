/*P13.3 Program to understand nesting in macros*/
#include<stdio.h>
#define ISLOWER(c) (c>=97 && c<=122)
#define ISUPPER(c) (c>=65 && c<=90)
#define ISALPHA(c) ISLOWER(c) || ISUPPER(c) 
#define ISNUM(c)   (c>=48 && c<=57) 
#define ISALPHANUM(c)  ISALPHA(c) || ISNUM(c)
int main(void)
{
	char ch;
	printf("Enter a character : \n");
	scanf("%c",&ch);
	if(ISALPHANUM(ch))
		printf("%c is an alphanumeric character\n",ch);
	else
		printf("%c is not an alphanumeric character\n",ch);
	return 0;
}