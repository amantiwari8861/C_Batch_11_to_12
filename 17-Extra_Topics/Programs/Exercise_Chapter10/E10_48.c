/*E10.48*/
#include<stdio.h>
void f(char *s, char a, char b);
int main(void)
{ 
	char str[100],a,b;
	printf("Enter a string :");
	gets(str);
	printf("Enter two characters :");
	scanf("%c %c",&a,&b);
	f(str,a,b);
	puts(str);
	return 0;
}
void f(char *str, char a, char b)
{ 
    if(*str=='\0')
		return;
    if(*str==a)
		*str=b;
    f(str+1,a,b);
} 