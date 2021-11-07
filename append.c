#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("program.txt","r");
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)
		{
			break;
		}
			printf("%c",ch);
		
	}
	fclose(fptr);
	return 0;
}
		
		