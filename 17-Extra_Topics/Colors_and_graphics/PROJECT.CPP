#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//#include<sys/fcntl.h>

void login();

void registe();

struct login
{
    char name[100];
    char username[20];
    char password[20];
}l;

int main()
{
	int cho;
	int value,value1;
	//clrscr();

	printf("Press '1' for Register \nPress '2' for Login\n\n");
	scanf("%d",&cho);
	if(cho==1)
	{
		system("CLS");
		fflush(stdin);
		registe();
	}
	else if(cho==2)
	{
		system("CLS");
		fflush(stdin);
		login();
	}
	_getch();
}


 void registe()
{
    FILE *log;
    log=fopen("secure.txt","w");
    //struct login l;

    printf("Enter Full Name: ");
    gets(l.name);

//    fflush(stdin);
    printf("Enter User Name: ");
    gets(l.username);

//    fflush(stdin);
    printf("Enter Password: ");
    gets(l.password);

    fprintf(log,"%s %s %s",l.name,l.username,l.password);
    //fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\nYour User Name is %s \n",l.username);
    printf("Now Login with user Id and Password \n");
    printf("\nPress any key to continue.....");
    _getch();
    system("CLS");
    login();
}

   void login()
{
	struct signin
	{
		char u[20];
		char p[20];
	};
    char username[20],password[20];
    int value,value1;
    struct signin l;
    //struct login l;
    FILE *log;
    log=fopen("secure.txt","r");
    if(log==NULL){
	printf("File not Found");
	_getch();
	exit(1);  }

    printf("User Id: ");
    gets(username);

    printf("Password: ");
    gets(password);

   while(fread(&l,sizeof(l),1,log))
    {
        value=strcmp(username,l.u);
        printf("vslue:%d",value);
        value1=strcmp(password,l.p);
        printf("value1=%d",value1);

       /* if(value==0 && value1==0)
        {
            printf("Login Successful");
        }
        else
        {
            printf("Please Enter Correct User Id and Password\n");
        } */
    }
	fclose(log);
	_getch();
}
