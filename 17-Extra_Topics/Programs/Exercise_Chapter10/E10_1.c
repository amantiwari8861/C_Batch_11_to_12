/*E10.1*/
#include<stdio.h>
int main(void)
{
	int i=0;
	char name[10] = {'M','o','h','i','n','i','\0'};
	while(name[i])
		putchar(name[i++]);
	return 0;
}