/*E12.4*/
#include<stdio.h>
int main(void)
{
	FILE *fptr;
	int ch;
	fptr = fopen("names.txt",'r');
	while((ch=fgetc(fptr))!=EOF)
		putchar(ch);
	fclose(fptr);
	return 0;
}