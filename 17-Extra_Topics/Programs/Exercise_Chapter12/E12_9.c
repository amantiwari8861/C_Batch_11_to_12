/*E12.9*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	FILE *fp1,*fp2;
	int c;
	char fname[20];

	printf("Enter name of the file : ");
	scanf("%s",fname);
	
	if((fp1=fopen(fname,"r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	if((fp2=fopen("tempfile.txt","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((c=fgetc(fp1))!=EOF)
		fputc(toupper(c),fp2);
	fclose(fp1);
	fclose(fp2);
	remove(fname);
	rename("tempfile.txt",fname);
	return 0;
}