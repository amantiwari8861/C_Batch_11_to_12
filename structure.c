#include<stdio.h>
int main()
{
    //Array : homogenous collection of data
    // int arr[5]; -> 5 blocks of type int
    //structure : heterogeneous collection of data 
    struct Student
    {
        int id;
        char name[20];
        float salary;
    }stu1,stu2;   //2 variables of data type struct Student //1st approach

    // stu1.id=102;
    // printf("enter the name : ");
    // scanf("%[^\n]s",&stu1.name);
    // printf("enter the salary : ");
    // scanf("%f",&stu1.salary);
    // printf("the id is %d and name is %s and salary is %f \n",stu1.id,stu1.name,stu1.salary);

    struct Student stu3; //2nd approach
    stu3.id=103;
    printf("enter the name : ");
    scanf("%[^\n]s",&stu3.name);
    printf("enter the salary : ");
    scanf("%f",&stu3.salary);
    printf("the id is %d and name is %s and salary is %f \n",stu3.id,stu3.name,stu3.salary);

    return 0;
}
