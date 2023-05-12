#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//#include<dos.h>
//#include<sys/fcntl.h>
int main(){
    FILE *sign;
    FILE *fp;
    FILE *fp1;
    FILE *rec;
	char buffer[10000],username1[1000],name[100],pass[20],cp[20];
	int i,j,a,course,r,date[1000],atten;
	char att,ch,rec1,attendence[10],username[20]=" ";

	system("color F0");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading....");
        Sleep(1000);
        system("CLS");

	char text[4000]="\
                     0000   000000  000000  0000  000000  00   00  000000   000000\n\r\
                    00  00    00      00     00     00    00   00  00   00  00\n\r\
                    000000    00      00     00     00    00   00  00   00  0000\n\r\
                    00  00    00      00     00     00    00   00  00   00  00\n\r\
                    00  00    00      00    0000    00     00000   000000   000000\n\r\
                    \n\r\
                     00  00000 00000 00000 0   0 0000  00000 0   0  00000 00000\n\r\
                    0  0   0     0   0     00  0 0   0 0     00  0 0      0\n\r\
                    0000   0     0   000   0 0 0 0   0 000   0 0 0 0      000\n\r\
                    0  0   0     0   0     0  00 0   0 0     0  00 0      0\n\r\
                    0  0   0     0   00000 0   0 0000  00000 0   0  00000 00000\n\r\
                    \n\r\
                    0   0   00   0   0   00    00000  00000  0   0  00000  0   0  00000\n\r\
                    00 00  0  0  00  0  0  0  0       0      00 00  0      00  0    0\n\r\
                    0 0 0  0000  0 0 0  0000  0  000  000    0 0 0  000    0 0 0    0\n\r\
                    0   0  0  0  0  00  0  0  0    0  0      0   0  0      0  00    0\n\r\
                    0   0  0  0  0   0  0  0   00000  00000  0   0  00000  0   0    0\n\r\
                    \r ";

        system("color 01");
         printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 02");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 03");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 04");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 05");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 06");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 07");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 08");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 09");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0A");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0B");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0C");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0D");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0E");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 0F");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");

	system("color 4F");
	 printf("\n\n\n\n\n");
	printf("%s",text);
	Sleep(300);
	system("CLS");
    _getch();

    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading....\n");
    for(j=0; j<120; j++)
    {   system("color F0");
        printf("*");
        Sleep(5);
    }
    printf("\n\n\t\t\t\t\tPress any key to continue....");
    _getch();

    system("CLS");
	system("color 4F");
	printf("\n\n\n\t\t\t\t\t      ATTENDENCE MANAGEMENT SYSTEM");

	//for login
       //system("color 74");
	printf("\n\n\t\t\t\t\t\t  Press 1 for login");
	printf("\n\t\t\t\t\t\t  Press 2 for Signup");

	printf("\n\t\t\t\t\t\t   Press 0 to EXIT \n");

	scanf("\t%d",&a);

	if(a==0)
	 exit(0);

	if(a==1)
	{
	  system("CLS");
	  system("color 2F");
	  printf("\n\n\\n\n\nt\t\t\t\t\t\tENTER LOGIN DETAILS");
	  //system("color 94");
	  printf("\n\n\t\t\t\t\t\t Enter username : ");
	  scanf("%s",username);
	  printf("\n\t\t\t\t\t\t Enter password : ");
	  scanf("%s",&pass);
	  /*if(strcmp(username,"anas")==0 || strcmp(username,"abhi")==0)
	  printf("Login succeed");
	  else
	  printf("Invalid ID");*/

	  if(strcmp(username,"aman")==0 && strcmp(pass,"tiwari")==0 || strcmp(username,"tiwari")==0 && strcmp(pass,"aman")==0 || strcmp(username,"ritika")==0 && strcmp(pass,"jain")==0 || strcmp(username,"abhishek")==0 && strcmp(pass,"sharma")==0)
	{

	    printf("\t\t\t\t\t\t Login Succesful\n");
	    _getch();
	}
	else
	{
		printf("\t\t\t\t\t\t Login Failed");
		_getch();
		exit(0);
	}

	  system("CLS");
	  system("color 4F");
	  printf("\n\n\n\n\n\t\t\t\t\t\t\ Choose Course :\n\t\t\t\t\t\t 1 BCA\n\t\t\t\t\t\t 2 MCA ");
	  printf("\n\n\n\t\t\t\t\t\t Enter 0 to EXIT\n");
	  scanf("%d",&course);
	  if(course==0)
	  exit(0);
	  if(course==1)
	  {
	    system("CLS");
	    printf("\n\n\n\n\t\t\t\t\t\tChoose option");
	    printf("\n\n\t\t\t\t\t\t 1. Attendence");
	    printf("\n\t\t\t\t\t\t 2. Records");
	    printf("\n\nt\t\t\t\t\t\t Enter 0 to EXIT  \n");

	    scanf("%d",&r);
	    if(r==0)
	    exit(0);

        if(r==1)
                {
                            system("CLS");
                            fp1= fopen("rec.txt","a");
                            printf("\tName\t\t\tDate\t\tAttendence\n\t");
                            for(i=0;i<5;i++)
                            {
                                 gets(name);
                                 //if(name[i]=="exit")
                                   // exit(0);

                                 //else
                                 printf("\n\t");
                                 //scanf("%s",name);

                                 fprintf(fp1,"%s\n\t",name);
                            }
                            fclose(fp1);
                            _getch();

                   }
        }

                   if(r==2)
                    {
                        char str[10];
                        system("CLS");
                        system("CLS");
                        printf("Records:-\n\n");
                        fp=fopen("rec.txt","r");
                        while(fgets(str,9,fp)!=NULL)
                        {
                            printf("%s",str);
                        }
                        fclose(fp);
                    }


                     if(course==2)
                    {
                            //clrscr();
                            system("CLS");
                            printf("Choose Option\n");
                            printf("\n\t 1. Attendence\n");
                            printf("\t 2. Records\n\n");
                            printf("\n\n\n\t Enter 0 to EXIT  \n");

                            scanf("%d",&r);
                             if(r==0)
                             exit(0);


                             if(r==1)
                            {
                                system("CLS");
                                printf(" Name \t\t Date \t    Attendence\n");
                                for(i=0;i<5;i++)
                                {
                                    scanf("%s");
                                }
                                att=getche();
                            }

                           if(r==2)
                            {
                                 char str[10];
                                 system("CLS");
                                 printf("Records:-\n\n");
                                 fp=fopen("rec.txt","r");
                                 while(fgets(str,9,fp)!=NULL)
                                 {
                                    printf("%s",str);
                                 }
                                 fclose(fp);
                            }
                    }
                    _getch();
                    exit(0);
	     }

       //signup process
            system("CLS");
            system("color 2F");
               if(a==2)
                {

                     sign=fopen("sign.txt","a");
                     printf("\n\\n\n\n\n\n\t\t\t\t\t\tEnter Signup details\n\n");

                     printf("\n\t\t\t\t\t\tEnter Username : ");
                     scanf("%s",username1);
                     //scanf("%s",sign);

                     printf("\t\t\t\t\t\tEnter Password : ");
                     scanf("%s",&pass);
                     fprintf(sign,"Username: %s   Password: %s\n",username1,pass);
                     //fprintf(sign,"%d\n",pass);
                     //scanf("%d",sign);
                     printf("\t\t\t\t\t\tConfirm Password: ");
                     scanf("%s",&cp);
                         if(strcmp(pass,cp)==0)
                         {
                                printf("\t\t\t\t\t\tSignup Success");
                         }
                         else
                         {
                                printf("\t\t\t\t\t\tPassword not Match");
                         }
	        }
 getch();
}
