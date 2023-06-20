/*E12.13*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i,c;
	FILE *fptr1,*fptr2;
	
	if((fptr2=fopen(argv[1],"w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("argc = %d\n",argc);
	for(i=2; i<argc; i++)
	{
		if((fptr1=fopen(argv[i],"r"))==NULL)
		{
			printf("Error in opening file\n");
			exit(1);
		}
		while((c=fgetc(fptr1))!=EOF)
			fputc(c,fptr2);
		fclose(fptr1);
	}
	fclose(fptr2);
	return 0;
}
