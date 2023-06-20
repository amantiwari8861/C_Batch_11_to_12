/*P12.20 Program to merge two files*/
#include<stdio.h>
#include<stdlib.h>
struct record
{
	char name[20];
	int roll;
	int marks;
}stu1, stu2;
int main(void)
{
	FILE *fp1,*fp2,*fp3;
	int i,j;
	if((fp1=fopen("sectionA","rb")) == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	if((fp2=fopen("sectionB","rb"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	if((fp3=fopen("merged","wb"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}

	i=fread(&stu1,sizeof(stu1),1,fp1);
	j=fread(&stu2,sizeof(stu2),1,fp2);

	while((i==1)&&(j==1))
	{
		if(stu1.marks > stu2.marks)
		{
			fwrite(&stu1,sizeof(stu1),1,fp3);
			i = fread(&stu1,sizeof(stu1),1,fp1);
		}
		else
		{
			fwrite(&stu2,sizeof(stu2),1,fp3);   
			j = fread(&stu2,sizeof(stu2),1,fp2);
		}
	}
	while(i==1)	/*Write remaining records of sectionA into merged*/
	{
		fwrite(&stu1,sizeof(stu1),1,fp3);
		i = fread(&stu1,sizeof(stu1),1,fp1);
	}
	while(j==1)     /*Write remaining records of sectionB into merged*/
	{
		fwrite(&stu1,sizeof(stu1),1,fp3);
		j = fread(&stu2,sizeof(stu2),1,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
