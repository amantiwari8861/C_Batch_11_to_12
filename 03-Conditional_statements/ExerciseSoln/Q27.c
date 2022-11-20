#include<stdio.h>
int main()
{
    // C Program to take a value from the user as input the basic salary of an employee 
    // and calculate its Gross salary according to the following:
    //  Basic Salary <= 10000: HRA = 20%, DA = 43%……………………………….
    // .Basic Salary <= 20000 : HRA = 25%, DA = 56%………………………………
    // Basic Salary > 20000 : HRA = 30%, DA = 61%.

    float salary,hra,da,gross,pf=0;
    printf("enter the salary:");
    scanf("%f",&salary);

    if (salary<=10000)
    {
        hra=salary*20.0/100.0;
        da=salary*43.0/100.0;
        gross=salary+hra+da;
    }
    else if (salary<=20000)
    {
        hra=salary*25.0/100.0;
        da=salary*56.0/100.0;
        gross=salary+hra+da;
        if (gross>20000)
        {
            pf=salary*15.0/100.0;
        }
    }
    else
    {
        hra=salary*30.0/100.0;
        da=salary*61.0/100.0;
        gross=salary+hra+da;

        if (gross>25000)
        {
            pf=salary*20.0/100.0;
        }
    }
    printf("salary : %0.2f \n",salary );
    printf("hra : %0.2f \n",hra );
    printf("da : %0.2f \n",da );
    
    printf("Gross Salary(salary+hra+da) = %0.2f \n",gross);
    printf("Gross Salary(salary+hra+da)  - PF@(%f)  = %0.2f \n",pf,(gross-pf));
    return 0;
}
