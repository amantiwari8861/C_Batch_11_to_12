/*E12.14*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
	char name[20];
	int age;
	int sal;
};

int main(void)
{
	struct employee	e,temp,emp[50];
	FILE *fp;
	int i,j,k=0,n;
	fp = fopen("emp","wb+");

	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}

	/*Enter records in the file*/
	printf("Enter number of records : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter name : ");
		scanf("%s",e.name);
		printf("Enter age : ");
		scanf("%d",&e.age);
		printf("Enter salary : ");
		scanf("%d",&e.sal);
		fwrite(&e,sizeof(e),1,fp);
	}	
	
	/*Read records from the file and store in the array emp*/
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
		emp[k++] = e;
	/*Sort the array emp*/
	for(i=0; i<k; i++)
	{
		for(j=0; j<k-1-i; j++)
		{
			if(strcmp(emp[j].name,emp[j+1].name)>0)
			{
				temp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp;
			}
			else if(strcmp(emp[j].name, emp[j+1].name)==0)
				if(emp[j].sal > emp[j+1].sal)
		        {
					temp=emp[j];
					emp[j]=emp[j+1];
					emp[j+1]=temp;
				}
		}
	}
	/*Write the sorted array emp in the file*/
	rewind(fp);
	fwrite(emp,sizeof(e),k,fp);
	
	/*Read the file and display the records*/
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("%s\t",e.name);
		printf("%d\t",e.age);
		printf("%d\n",e.sal);
	}
	fclose(fp);
	return 0;
}