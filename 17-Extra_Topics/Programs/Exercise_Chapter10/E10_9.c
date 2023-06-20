/*E10.9*/
#include<stdio.h>
int main(void)
{
	char str[]="painstaking";
	char *p=str+5;
	printf("%c\t",*p);
	printf("%s\n",p);
	return 0;
}
