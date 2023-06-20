/*P12.27 Program to copy a file to another*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *source,*dest;
	int c;
	if(argc!=3)
	{
		printf("Wrong number of arguments\n");
		exit(1);
	}
	if((source=fopen(argv[1],"r"))==NULL)
	{
		printf("Can’t open source file\n");
		exit(1);
	}
	if((dest=fopen(argv[2],"w"))==NULL)
	{
		printf("Can’t open destination file\n");
		exit(1);
	}
	while((c=fgetc(source))!=EOF)
		fputc(c,dest);
	fclose(source);
	fclose(dest);
	return 0;
}