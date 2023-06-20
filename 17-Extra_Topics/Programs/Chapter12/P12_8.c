/*P12.8 Program to understand the use of fprintf()*/
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
	int i,n;
	if((fp=fopen("students","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter number of records : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("Enter name and marks : ");
		scanf("%s%f",stu.name,&stu.marks);
		fprintf(fp,"%s %f",stu.name,stu.marks);
	}
	return 0;
}