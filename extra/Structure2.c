#include<stdio.h>
#include<string.h>

int main()
{
    struct user
    {
        int id;
        char name[50];
        float salary;
        char gender;
    }u3;
    struct user u1,u2={200,"Dev gupta",99999,'M'};

    // u1.id=100;
    // // u1.name="Aman";
    // strcpy(u1.name,"Aman");
    // u1.salary=50000;
    // u1.gender='M';
    printf("enter user1 details:\n");
    scanf("%d",&u1.id);
    fflush(stdin);
    scanf("%[^\n]s",&u1.name);
    scanf("%f%*c",&u1.salary);
    scanf("%c",&u1.gender);

    printf(" Id= %d Name=%s salary=%f gender=%c \n",u1.id,u1.name,u1.salary,u1.gender);
    printf(" Id= %d Name=%s salary=%f gender=%c \n",u2.id,u2.name,u2.salary,u2.gender);


    return 0;
}
