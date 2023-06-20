/*P12.13 Program to understand the use of ftell()*/
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
	FILE *fp;
	fp = fopen("stu","rb");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Position indicator in the beginning -> %ld\n",ftell(fp));
	while(fread(&student,sizeof(student),1,fp)==1)
	{
		printf("Position indicator -> %ld\n",ftell(fp));
		printf("%s\t",student.name);
		printf("%d\t",student.roll);
		printf("%d\n",student.marks);
	}
	printf("%d\n",ftell(fp));
	fclose(fp);
	return 0;
}