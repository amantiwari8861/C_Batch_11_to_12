#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char user[8],pass[8],empname[10];
	int empid,empsal,hra,da,ta,gross;
	system("cls");
	
	printf("\n\t************* Login to Product Management System ****************\n");
	
	printf("\n\tUsername : ");
	scanf("%s",&user);
	printf("\n\tPassword : ");
	scanf("%s",&pass);
	
	FILE *fptr;
	fptr=fopen("input.txt","w");
	if(fptr==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	
	if(!strcmp(user,"aman") && !strcmp(pass,"tiwari"))
	{
		system("cls");
	printf("\n\t\tEmployee Salary Maintainance\n");
	printf("\n\t_______________________________________\n");
	printf("\n\tEmployee ID : ");
	scanf("%d",&empid);
	fprintf(fptr,"%d\n",empid);
	printf("\n\tEmployee Name : ");
	scanf("%s",&empname);
	fprintf(fptr,"%s\n",empname);
	printf("\n\tBasic Salary : ");
	scanf("%d",&empsal);
	fprintf(fptr,"%d\n",empsal);
	printf("\n\tHRA : ");
	scanf("%d",&hra);
	fprintf(fptr,"%d\n",hra);
	printf("\n\tDA : ");
	scanf("%d",&da);
	fprintf(fptr,"%d\n",da);
	printf("\n\tTA : ");
	scanf("%d",&ta);
	fprintf(fptr,"%d\n",da);
	gross=empsal+hra+da+ta;
	printf("\n\t\t\t\t\t\tGross Salary : %d",gross);
	fprintf(fptr,"\t\t\t\tGross : %d\n",gross);
	fclose(fptr);
	}
	else
	{
		printf("\n\tpls enter valid username and password\n");
	}

	return 0;
}