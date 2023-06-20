/*E12.11*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp1,*fp2;
	char str[100],fname[20];
	int n=1,page=1;
	
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
	while((fgets(str,100,fp1))!=NULL)
	{
		if(n%50==1)
			fprintf(fp2,"\n......Page %d.....\n",page++);
		fprintf(fp2,"%d ",n++);
        fputs(str, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	remove(fname);
	rename("tempfile.txt",fname);
	return 0;
}