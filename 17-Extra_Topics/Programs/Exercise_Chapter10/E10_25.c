/*E10.25*/
#include<stdio.h>
void func(char *p);
int main(void)
{
	char *str="tap";
	func(str);
	return 0;
}
void func(char *p)
{
	if(*p)
	{
		func(p+1);
		printf("%c",*p++);
	}
}