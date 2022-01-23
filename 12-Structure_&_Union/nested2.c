#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    struct{
        int pincode;
        char city[20];
    }addr;
    float salary;
};
int main()
{
    // struct employee e1; // e1 will have id names salary and an addrect of address
    //in addrect of address we have 2 variables pincode and city
    struct employee emp1;

    printf("enter the employee id\n");
    scanf("%d",&emp1.id);
    printf("enter the employee name\n");
    fflush(stdin);
    scanf("%[^\n]s",&emp1.name);
    fflush(stdin);
    printf("enter the employee salary\n");
    scanf("%f",&emp1.salary);
    printf("enter the employee pincode\n");
    scanf("%d",&emp1.addr.pincode);
    fflush(stdin);
    printf("enter the employee city\n");
    scanf("%[^\n]s",&emp1.addr.city);
    fflush(stdin);

    printf("employee id is %d \n",emp1.id);
    printf("employee name is %s \n",emp1.name);
    printf("employee salary is %.2f \n",emp1.salary);
    printf("employee pincode is %d \n",emp1.addr.pincode);
    printf("employee city is %s \n",emp1.addr.city);
    return 0;
}