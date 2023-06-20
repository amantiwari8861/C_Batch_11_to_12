/* P12.16 Program to read records from a file and calculate grade of each student
 and display it
grade= A if marks>=80
	 = B if marks>=60 and < 80
	 = C if marks<60
*/
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
	fp = fopen("stu","rb");/*opened in read mode */
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("\nNAME\t\tMARKS\t\tGRADE\n\n");
	while(fread(&student,sizeof(student),1,fp)==1)
	{
		printf("%s\t\t",student.name);
		printf("%4d\t\t",student.marks);
		if(student.marks>=80)
			printf("A\n");
		else if(student.marks>=60)
			printf("B\n");
		else
			printf("C\n");
	}
	fclose(fp);
	return 0;
}
