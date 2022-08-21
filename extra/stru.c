#include<stdio.h>
#include<string.h>
int main()
{
    struct Employee
    {
        int empid;
        char name[30];
        float salary;
        
    }e3;    
    
    struct Employee e1,e2;
    // e1.empid=201;  //pre-defined value
    printf("enter empid:");
    scanf("%d",&e1.empid);//user-defined

    // e1.name="AMan";  //error
    strcpy(e1.name,"Aman");
    // scanf("%[^\n]s",&e1.name);

    e1.salary=56000.78;

    printf(" %d   %s   %f  \n",e1.empid,e1.name,e1.salary);

    

    return 0;
}
