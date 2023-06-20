/*P12.19 Program to display the records in sorted order, sorting is performed in ascending order w.r.t. name*/
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
	}student,temp,stu[50];
	FILE *fp;
	int i,j,k=0;
	fp = fopen("stu","rb");/*opened in read mode*/
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while(fread(&student,sizeof(student),1,fp)==1)
		stu[k++] = student;
	/*Bubble sort*/
	for(i=0; i<k; i++)
	{
		for(j=0; j<k-1-i; j++)
		{
			if(strcmp(stu[j].name, stu[j+1].name)>0)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	printf("\nNAME\t\tROLLNO\t\tMARKS\n\n");
	for(i=0; i<k; i++)
	{
		printf("%s\t\t",stu[i].name);
		printf("%d\t\t",stu[i].roll);
		printf("%d\n",stu[i].marks);
	}
	fclose(fp);
	return 0;
}
