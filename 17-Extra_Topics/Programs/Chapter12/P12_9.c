/*P12.9 Program to understand the use of fscanf()*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	float marks;
}stu;
int main(void)
{
	FILE *fp;
	if((fp=fopen("students","r"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("NAME\tMARKS\n");
	while(fscanf(fp,"%s %f",stu.name,&stu.marks)!=EOF )
		printf("%s\t%f\n",stu.name,stu.marks);
	
	fclose(fp);
	return 0;
}