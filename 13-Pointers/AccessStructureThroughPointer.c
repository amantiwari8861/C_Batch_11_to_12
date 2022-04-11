#include<stdio.h>
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
    scanf("%d",&n);//3
    struct Student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n ------------------------------------------  \n");
        printf("enter the id of %dth student : ",i+1);
        scanf("%d",&stu[i].id);
        fflush(stdin);
        printf("enter the name of %dth student : ",i+1);
        scanf("%[^\n]s",&stu[i].name);
        fflush(stdin);
        printf("enter the salary of %dth student : ",i+1);
        scanf("%f",&stu[i].salary);
    }
    struct Student *stuptr=NULL;
    stuptr=&stu[0];

    printf("\n ------------------------------------------  \n");
    printf("the id is %d and name is %s and salary is %0.2f \n",stuptr -> id,stuptr->name,stuptr->salary);
    return 0;
}
