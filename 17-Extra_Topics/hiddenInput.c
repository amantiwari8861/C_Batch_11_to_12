#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char username[20],password[20];
    int i=0,len;
    printf("Enter username :");
    scanf("%[^\n]s",&username);

    printf("enter password length:");
    scanf("%d",&len);
    printf("Enter Password of length %d :",len);
    do
    {
        password[i]=getch();
        // printf("*");
        if(i == len-1)
              break;  
        i++;
    } while (1);
    
    printf(" \nur username is :%s\n",username);
    printf("ur password is :%s\n",password);

    if (!strcmp(username,"aman") &&  !strcmp(password,"tiwari"))
    {
        printf("login succesfully !\n");
    }
    else
    {
        printf("login unsucessfull !");
    }

    return 0;
}
