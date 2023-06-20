/*E10.3*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *str1="Good",*str2="Morning";
	strcat(str1,str2);
	printf("%s\n",str1);
	return 0;
}