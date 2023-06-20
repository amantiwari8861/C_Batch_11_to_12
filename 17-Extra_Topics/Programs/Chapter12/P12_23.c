/*P12.23 Program to understand the use of feof() and ferror()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	int ch;
	if((fptr=fopen("myfile","r"))==NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	while((ch=getc(fptr))!=EOF)
			printf("%c",ch);
	if(feof(fptr))
		printf("End of file\n");
	if(ferror(fptr))
		printf("Error\n");
	fclose(fptr);
	return 0;
}
