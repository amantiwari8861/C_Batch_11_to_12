/*E10.50*/  
#include<stdio.h>
#include<string.h>
int find(char *str, char c, int i);
int findFirst(char *str, char c);
int main(void)
{ 
	char str[100]; 
	printf("Enter a string :");
    gets(str);
	printf("%d\n",findFirst(str,'a'));
	return 0;
}
int findFirst(char *str, char c)
{
	return find(str,c,0);
}
int find(char *str, char c, int i)
{
	if(*str=='\0')
		return -1;
	if(*str == c)
		return i; 
	return find(str+1,c,i+1);
}