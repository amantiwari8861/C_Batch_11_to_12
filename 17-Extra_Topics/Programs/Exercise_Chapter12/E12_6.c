/*E12.6*/
#include<stdio.h>
int main(void)
{
	FILE *fptr;
	char str[80];
	fptr = fopen("test.txt","r");
	while(fgets(str,80,fptr)!=EOF)
		puts(str);
	return 0;
}