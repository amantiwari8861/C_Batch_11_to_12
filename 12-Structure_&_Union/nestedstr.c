#include<stdio.h>
#define MAX 20  // this is a macro

struct address
{
    int pincode;
    char city[MAX];
};
struct employee
{
    int id;
    char name[MAX];
    float salary;
    struct address obj;
};
int main()
{
    // struct employee e1; // e1 will have id names salary and an object of address
    //in object of address we have 2 variables pincode and city
    
    struct employee employeeObj[10];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the employee id\n");
        scanf("%d",&employeeObj[i].id);
        printf("enter the employee name\n");
        fflush(stdin);
        scanf("%[^\n]s",&employeeObj[i].name);
        fflush(stdin);
        printf("enter the employee salary\n");
        scanf("%f",&employeeObj[i].salary);
        
        printf("enter the employee pincode\n");
        scanf("%d",&employeeObj[i].obj.pincode);
        printf("enter the employee city\n");
        scanf("%[^\n]s",&employeeObj[i].obj.city);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("employee id is %d \n",employeeObj[i].id);
        printf("employee name is %s \n",employeeObj[i].name);
        printf("employee salary is %.2f \n",employeeObj[i].salary);
    }
    return 0;
}