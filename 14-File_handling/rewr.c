#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fptr1,*fptr2;
	char sentence[100];
	char ch;
	fptr1=fopen("program.txt","r");
	fptr2=fopen("written.txt","w");
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch==EOF)
		{
			break;
		}
			printf("%c",ch);
		
	}
		fclose(fptr1);
	
	if(fptr2==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	printf("enter the sentence:\n");
	gets(sentence);
	fprintf(fptr2,"%s",sentence);
	fclose(fptr2);
}
	
	
	