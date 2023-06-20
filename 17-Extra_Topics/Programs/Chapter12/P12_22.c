/*P12.22 Program to understand the use of ferror()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	int ch;
	fptr=fopen("test","w");
	ch=getc(fptr);
	if(ferror(fptr))
	{
		printf("Error in read operation\n");
		exit(1);
	}
	else
		printf("%c",ch);
	fclose(fptr);
	return 0;
}
