/*P12.1 Program to understand the use of fputc() function*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	int ch;
	if((fptr=fopen("myfile","w"))==NULL)
	{
		printf("File does not exist\n");
		exit(1);
	}
	printf("Enter text :\n");
	/*Press Ctrl+z in DOS and Ctrl+d in Unix to stop reading characters */
	while((ch=getchar())!=EOF)  
		fputc(ch,fptr);
	fclose(fptr);
	return 0;
}