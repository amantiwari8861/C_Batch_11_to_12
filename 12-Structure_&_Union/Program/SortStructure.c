#include<stdio.h>
#include "Data.h"
#include<string.h>

int main()
{
    Employee empList[10]={
        {100,"Aman",500000,"CEO"},
        {107,"Shashwat",50000,"manager"},
        {108,"Aman Tiwari",60000,"Employee"},
        {103,"Krishna",7000,"Sales"},
        {112,"krishna Bisht",9000,"IT"},
        {114,"Ankit",8000,"HR"},
        {201,"ABcd",6700,"Accountant"},
        {501,"xyz",8738,"employee"},
        {503,"XYZ",23,"Employee"},
        {202,"1xyz",12000,"Employee"}
    };
    Employee temp;
    for (int i = 0; i < 10-1; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            // if(strcmp(empList[j].name,empList[j+1].name)>0)//Ascending
            // if(strcmp(empList[j].name,empList[j+1].name)<0)//Descending
            // if(empList[j].salary>empList[j+1].salary) //Asc
            if(empList[j].salary<empList[j+1].salary) //Desc
            {
                temp=empList[j];
                empList[j]=empList[j+1];
                empList[j+1]=temp;
            }
        }
    }
    printf(" List of All Employees Soted Acc. Name\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t======= Employee %d Details ==========\n",i+1);
        printf("Employee Id:%d \n",empList[i].id);
        printf("Employee Name:%s \n",empList[i].name);
        printf("Employee Salary:%f \n",empList[i].salary);
        printf("Employee Department:%s \n",empList[i].dept);
    }
    
    return 0;
}
