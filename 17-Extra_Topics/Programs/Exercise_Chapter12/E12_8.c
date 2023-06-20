/*E12.8*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp1,*fp2;
	char str[100];
	if((fp1=fopen("source.txt","r"))==NULL)
	{
		printf("Can’t open source file\n");
		exit(1);
	}
	if((fp2=fopen("dest.txt","w"))==NULL)
	{
		printf("Can’t open destination file\n");
		exit(1);
	}
	while((fgets(str,100,fp1)) != NULL)
		if(strcmp(str,"\n")!=0)
            fputs(str, fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}