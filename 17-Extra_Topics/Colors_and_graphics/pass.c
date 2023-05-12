#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
	char user[8],pass[8],username[10],password[10],fname[10],lname[10];
	int choice;
	printf("\n\t\tEnter ur choice\n");
	printf("\t1.register\n");
	printf("\t2.login\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		system("cls");
		printf("\n\t\t\tplease register yourself\n");
		
	FILE *log;
    log=fopen("database.txt","a");
   //log=fopen("validate.txt","a");

    printf("Enter First Name: ");
    scanf("%s",&fname);

    printf("Enter Last Name: ");
    scanf("%s",&lname);

    printf("Enter User Name: ");
    scanf("%s",&username);

    printf("Enter Password: ");
    scanf("%s",&password);

    fprintf(log,"First Name: %s    Last Name: %s   User Name: %s  pass:%s  \n\n",fname,lname,username,password);
	//fprintf(log2,"%s#%s",username,password);
    fclose(log);
    //fclose(log2);

    printf("\n\nYour User Name is user Id \n");
    printf("Now Login with user Id and Password \n");
		
		printf("\n\tplease enter any key to exit.......\n\n");
	}
	else if(choice==2)
	{
		system("cls");
		FILE *fptr;
		fptr=fopen("validate.txt","r");
		if(fptr==NULL)
		{
			printf("Error! unable to open file");
			exit(1);
		}
		printf("\n\tUsername : ");
		scanf("%s",&user);
		printf("\n\tPassword : ");
		scanf("%s",&pass);
			
			
		
		printf("\n\tplease enter any key to exit.......\n\n");
	}
	else
	{
		system("cls");
		printf("\n\tplease enter a valid option\n");
	}
	getch();
	return 0;
}