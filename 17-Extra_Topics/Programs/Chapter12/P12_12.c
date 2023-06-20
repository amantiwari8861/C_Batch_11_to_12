/*P12.12 Program to understand the use of fseek()*/
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
	int n;
	FILE *fp;
	fp=fopen("stu","rb");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter the record number to be read : ");
	scanf("%d",&n);
	fseek(fp,(n-1)*sizeof(student),0);   /*skip n-1 records*/
	fread(&student,sizeof(student),1,fp);  /*Read the nth record*/
	printf("%s\t",student.name);
	printf("%d\t",student.roll);
	printf("%d\n",student.marks);
	fclose(fp);
	return 0;
}