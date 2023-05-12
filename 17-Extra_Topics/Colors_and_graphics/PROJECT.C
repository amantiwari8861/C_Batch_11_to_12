#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//void login();

struct login
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
};

 /*void registe()
{

}

   void login()
{

}  */


int main()
{
	int cho;
	//clrscr();

	printf("Press '1' for Register \nPress '2' for Login\n\n");
	scanf("%d",&cho);
	if(cho==1)
	{
		system("CLS");
		struct login l;
    FILE *log;
    log=fopen("login12.txt","a");

    printf("Enter First Name: ");
    scanf("%s",l.fname);

    printf("Enter Last Name: ");
    scanf("%s",l.lname);

    printf("Enter User Name: ");
    scanf("%s",l.username);

    printf("Enter Password: ");
    scanf("%s",l.password);

    fprintf(log,"First Name: %s    Last Name: %s   User Name: %s   Password: %s\n\n",l.fname,l.lname,l.username,l.password);

    fclose(log);

    printf("\n\nYour User Name is user Id \n");
    printf("Now Login with user Id and Password \n");
    printf("\nPress any key to continue.....");
    _getch();
    //system("CLS");
    //login();
	}
	else if(cho==2)
	{
		system("CLS");
		struct login l;

    char username[20],password[20];
    FILE *log;
    log=fopen("login.txt","r");

    printf("User Id: ");
    scanf("%s",username);

    printf("Password: ");
    scanf("%s",&password);
        //char str[4];
		//while(fgets(str,4,log)!=NULL)
    while(fread(&l,sizeof(l),1,log))
	{
	if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
	{

	    printf("Login Succesful\n");
	}
	else
	{
		printf("Login Failed");
	}
	}
	fclose(log);
	}
	
	_getch();
}

