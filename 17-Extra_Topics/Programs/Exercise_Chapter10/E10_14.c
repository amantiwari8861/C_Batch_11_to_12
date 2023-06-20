/*E10.14*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[]="Parul";
	char str2[10];
	strcpy(str2,str1);
	if(str1==str2)
		printf("Same\n");
	else
		printf("Different\n");
	return 0;
}