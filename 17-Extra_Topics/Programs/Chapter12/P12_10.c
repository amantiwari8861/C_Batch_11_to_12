/*P12.10 Program to understand the use of fwrite()*/
#include<stdio.h>
#include<stdlib.h>
struct record
{
	char name[20];
	int roll;
	int marks;
}student;
int main(void)
{
	int i,n;
	FILE *fp;
	if((fp=fopen("stu","wb"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter number of records : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter name : ");
		scanf("%s",student.name);
		printf("Enter roll no : ");
		scanf("%d",&student.roll);
		printf("Enter marks : ");
		scanf("%d",&student.marks);
		fwrite(&student,sizeof(student),1,fp);
	}
	fclose(fp);
	return 0;
}