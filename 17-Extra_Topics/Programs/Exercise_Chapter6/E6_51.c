/*E6.51*/
#include<stdio.h>
int isAlphaNumeric(char ch);
int isAlphabet(char ch);
int isNumeric(char ch);
int main(void)
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if( isAlphaNumeric(ch) )
		printf("%c is AlphaNumeric\n",ch);
	else
		printf("%c is not AlphaNumeric\n",ch);
	return 0;
}
int isAlphaNumeric(char ch)
{
	return isAlphabet(ch) || isNumeric(ch);
}
int isAlphabet(char ch)
{
	return ch>=65 && ch<=90  || ch>=97 && ch<=122;  
}
int isNumeric(char ch)
{
	return ch>=48 && ch<=57;  
}
