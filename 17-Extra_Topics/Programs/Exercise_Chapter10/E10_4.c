/*E10.4*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[10]="How";
	strcat(str,'?');
	printf("%s\n",str);
	return 0;
}