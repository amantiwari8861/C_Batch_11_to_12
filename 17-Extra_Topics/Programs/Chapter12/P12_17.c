/*P12.17 Program to modify records in a file*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	struct record
	{
		char name[20];
		int roll;
		int marks;
	}student;
	FILE *fp;
	char name[20];
	long size = sizeof(student);
	unsigned flag = 0;
	fp = fopen("stu","rb+");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter name of student whose record is to be modified : ");
	scanf("%s",name);

	while(fread(&student,sizeof(student),1,fp)==1)
		if(strcmp(student.name, name)==0)
		{
			printf("Enter new data -->\n");
			printf("Enter name : ");
			scanf("%s",student.name);
			printf("Enter roll no : ");
			scanf("%d",&student.roll);
			printf("Enter marks : ");
			scanf("%d",&student.marks);
			fseek(fp,-size,1);
			fwrite(&student,sizeof(student),1,fp);
			flag = 1;
			break;
		}
	if(flag==0)
		printf("Name not found in file\n");
	else
		printf("Record Modified......\n");
	fclose(fp);
	return 0;
}
