/*E12.10*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	FILE *p;
	
	char ch, fname[50];
	int n=0;
		
	printf("Enter name of the file : ");
	scanf("%s",fname);
	
	if((p=fopen(fname,"r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((ch=fgetc(p))!=EOF)
	{
		if(isalnum(ch))
			n++;
	}
	printf("Total alphanumeric characters = %d\n",n);
	fclose(p);
	return 0;
}