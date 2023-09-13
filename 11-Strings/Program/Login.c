#include<stdio.h>
#include<string.h>

int main()
{
    char name[50],pass[50];
    printf("enter name :");
    scanf("%[^\n]s",name);
    fflush(stdin);
    printf("enter password:");
    scanf("%[^\n]s",pass);

    if (strcmp(name,"Aman")==0 && strcmp(pass,"1234")==0)
    {
        printf("Welcome Aman Sir !\n");
    }
    else
    {
        printf("Get lost !");
    }    
    

    return 0;
}
