/*E6.52*/
#include<stdio.h>
char upper(char ch);
int main(void)
{
	char ch;
	while((ch=getchar())!='\n')
		putchar(upper(ch));
	return 0;
}
char upper(char ch)
{
	return (ch>=97 && ch<=122) ? ch-32 : ch;
}