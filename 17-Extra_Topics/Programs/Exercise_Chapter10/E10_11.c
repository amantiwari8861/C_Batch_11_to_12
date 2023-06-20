/*E10.11*/
#include<stdio.h>
int main(void)
{
	char str[]="Lucknow";
	char *p=str;
	p=p+3;
	p[3]='t';
	printf("%s  %s\n",str,p);
	return 0;
}