/*E10.52*/
#include<stdio.h>
#include<string.h>
int is_palindrome(char *s);
int find(char *s, int size);
int main(void)
{ 
	char str[100]; 
	printf("Enter a string :");
    gets(str);
	if(is_palindrome(str))
		printf("%s is a palindrome\n", str);
	else
		printf("%s is not a palindrome\n", str);
	return 0;
} 
int is_palindrome(char *str)
{
	return find(str,strlen(str));
}
int find(char *str, int size)
{
	if(size<=1) 
		return 1;
	if(str[0] != str[size-1])
		return 0;
    return find(str+1,size-2);
}

