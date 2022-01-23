#include<stdio.h>
int main()
{
    int size;
    struct Student
    {
        int id;
        char name[20];
        float salary;
    };
    printf("enter the no. of students : ");
    scanf("%d",&size);//let no. of students =3
    struct Student stu[size]; //structure array
    for (int i = 0; i < size; i++)
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
    for (int i = 0; i < size; i++)
    {        
        printf("\n ------------------------------------------  \n");
        printf("the id is %d and name is %s and salary is %0.2f \n",stu[i].id,stu[i].name,stu[i].salary);
    }
    

    return 0;
}
