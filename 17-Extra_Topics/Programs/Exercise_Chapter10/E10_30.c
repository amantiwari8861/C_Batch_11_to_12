/*E10.30*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *p, str[100]="		main()";
	strcpy(str, str+strspn(str, " \t"));
	puts(str);
	return 0;
}