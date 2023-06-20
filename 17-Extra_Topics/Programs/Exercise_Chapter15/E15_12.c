/*E15.12*/
#include<stdio.h>
int main(void)
{
	char str1[]="hockey";
	char str2[]="Cricket";
	char *const p=str1;
	*p='j';
	p=str2;
	return 0;
}