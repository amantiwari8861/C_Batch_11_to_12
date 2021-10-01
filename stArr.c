#include<stdio.h>
#include<windows.h>
int main()
{
    int n;
    struct Student
    {
        int id;
        char name[20];
        float salary;
    };
    printf("enter the no. of employees : ");
    scanf("%d",&n);
    struct Student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n ------------------------------------------  \n");
        printf("enter the id : ");
        scanf("%d",&stu[i].id);
        fflush(stdin);
        printf("enter the name: ");
        scanf("%[^\n]s",&stu[i].name);
        fflush(stdin);
        printf("enter the salary : ");
        scanf("%f",&stu[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        system("color 03"); //background green and foreground aqua
        printf("the id is %d and name is %s and salary is %0.2f \n",stu[i].id,stu[i].name,stu[i].salary);
    }
    

    return 0;
}
