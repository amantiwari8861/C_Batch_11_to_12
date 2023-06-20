/*P12.2 Program to understand the use of fgetc()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *p;
	char ch;
	if((p=fopen("myfile","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((ch=fgetc(p))!=EOF)
			printf("%c",ch);
	fclose(p);
	return 0;
}