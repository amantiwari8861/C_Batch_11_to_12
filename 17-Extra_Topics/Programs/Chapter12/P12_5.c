/*P12.5 Program to understand the use of fputs()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	char str[80];
	if((fptr=fopen("test1","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter the text\n");
	printf("To stop entering, press Ctrl+d/Ctrl+z\n");
	while(gets(str)!=NULL)
	{	
		strcat(str,"\n");
		fputs(str,fptr);
	}
	fclose(fptr);
	return 0;
}