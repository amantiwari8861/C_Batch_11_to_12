#include <stdio.h>
#include <string.h>

typedef struct user
{
    int id;
    char name[50];
    float salary;
    char gender;
}aman;
int main()
{
    // struct user userArr[50];
    aman userArr[50];

    for (int i = 0; i < 5; i++)
    {
        printf("enter user %d id:\n", i + 1);
        scanf("%d", &userArr[i].id);
        fflush(stdin);
        printf("enter user %d name:\n", i + 1);
        scanf("%[^\n]s", &userArr[i].name);
        printf("enter user %d salary:\n", i + 1);
        scanf("%f%*c", &userArr[i].salary);
        printf("enter user %d gender:\n", i + 1);
        scanf("%c", &userArr[i].gender);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("User %d :\n\t Id= %d Name=%s salary=%f gender=%c \n",i+1,userArr[i].id,userArr[i].name,userArr[i].salary,userArr[i].gender);
    }
    

    return 0;
}
