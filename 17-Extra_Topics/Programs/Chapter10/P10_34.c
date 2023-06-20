/*P10.34*/
#include<stdio.h>
#include<string.h>
int count(char *str, char ch);
void replace(char *str, char ch1, char ch2);
int main(void)
{
	char str[30];
	strcpy(str,"Programming in C language");
	printf("%d\n",count(str,'a'));
	replace(str,'a','z');
	puts(str);
	return 0;
}
int count(char *str, char ch)
{
	int cnt=0;
	while(*str++!='\0')
		if(*str==ch)
			cnt++;
	return cnt;
}
void replace(char *str, char ch1, char ch2)
{
	while(*str++!='\0')
		if(*str==ch1)
			*str=ch2;
}