#include<stdio.h>
#define MAX 30  // this is a macro

struct address
{
    int pincode;
    char city[MAX];
    char state[MAX];
};
struct employee
{
    int id;
    char name[MAX];
    float salary;
    struct address localaddress;
    struct address permanentaddress;
};
int main()
{
    // struct employee e1; // e1 will have id names salary and an object of address
    //in object of address we have 2 variables pincode and city
    
    struct employee employeeObj[10];

    for (int i = 0; i < 2; i++)
    {
        printf("enter the employee id:");
        scanf("%d",&employeeObj[i].id);
        fflush(stdin);
        printf("enter the employee name:");
        scanf("%[^\n]s",&employeeObj[i].name);
        fflush(stdin);
        printf("enter the employee salary:");
        scanf("%f",&employeeObj[i].salary);

        printf("========= Enter Local Address ===============\n");
        printf("\t\t pincode:");
        scanf("%d",&employeeObj[i].localaddress.pincode);
        fflush(stdin);
        printf("\t\t city:");
        scanf("%[^\n]s",&employeeObj[i].localaddress.city);
    
        printf("============== Enter the Permanent Address =================\n");
        printf("\t\t pincode:");
        scanf("%d",&employeeObj[i].permanentaddress.pincode);
        fflush(stdin);
        printf("\t\t city:");
        scanf("%[^\n]s",&employeeObj[i].permanentaddress.city);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("employee id is %d \n",employeeObj[i].id);
        printf("employee name is %s \n",employeeObj[i].name);
        printf("employee salary is %.2f \n",employeeObj[i].salary);
        printf("Employee's Local Address \n");
        printf("\t city is %s \n",employeeObj[i].localaddress.city);
        printf("\t pincode is %d \n",employeeObj[i].localaddress.pincode);
        printf("Employee's Permanent Address \n");
        printf("\t city is %s \n",employeeObj[i].permanentaddress.city);
        printf("\t pincode is %d \n",employeeObj[i].permanentaddress.pincode);
    }
    return 0;
}