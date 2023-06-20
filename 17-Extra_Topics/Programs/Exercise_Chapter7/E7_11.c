/*E7_11*/
#include<stdio.h>
int f(char *s,char a);
int main(void)
{ 
	char str[100],a;
	printf("Enter a string :");
	gets(str);
	printf("Enter a character :");
	scanf("%c",&a);
	printf("%d\n",f(str,a));
	return 0;
}
int f(char *s,char a)
{ 
    if(*s=='\0')
		return 0;
    if(*s==a)
		return 1 + f(s+1,a); 
    return f(s+1,a); 
} 