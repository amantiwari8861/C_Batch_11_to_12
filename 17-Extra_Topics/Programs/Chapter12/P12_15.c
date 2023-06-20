/*P12.15 Program to append records to a file*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	struct record
	{
		char name[20];
		int roll;
		int marks;
	}student;
	FILE *fp;
	int choice=1;
	fp=fopen("stu","ab");/*opened in append mode*/
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while(choice==1)
	{
		printf("Enter name : ");
		scanf("%s",student.name);
		printf("Enter roll no : ");
		scanf("%d",&student.roll);
		printf("Enter marks : ");
		scanf("%d",&student.marks);
		fwrite(&student,sizeof(student),1,fp);
		printf("Want to enter more ?(1 for yes / 0 for no) : ");
		scanf("%d",&choice);
	}
	fclose(fp);
	return 0;
}