/* 19. Write a program in C to calculate and print the Electricity bill 
of a given customer. The customer id., name and unit consumed by the user
should be taken from the keyboard and display the total amount to pay to 
the customer. The charge are as follow : */

#include<stdio.h>
#include<string.h>

int main()
{
    int id,unit,p;
    float amount,ucharge,surcharge,total;
    char name;

    printf("Enter the customer Id Num = ");
    scanf("%d",&id);
    
    printf("Enter the customer name = ");
    scanf("%s",&name);

    printf("Enter the unit = ");
    scanf("%d",&unit);

    if (unit<100)
    {
        ucharge = 1;
        p=0;
        printf("unit is less then 100 so surcharge will not be charged");
    }
    else
    {
        if ((unit>=100) && (unit<200))
        {
           ucharge = 1.20;
           p=1;
        }
        else
        {
            if ((unit>=200) && (unit<400))
            {
                ucharge = 1.50;
                p=1;
            }
            else
            {
                if ((unit>=400) && (unit<600))
                {
                    ucharge = 1.80;
                    p=15;
                }
                else
                {
                    if (unit>=600)
                    {
                        ucharge = 2.00;
                        p=15;
                    }
                    else
                    {
                        printf("Invalid unit");
                    }
                    
                }
                
            }
            
        }
        
    }
    amount = ucharge*unit;
    surcharge = (amount*p)/100;
    total = amount+surcharge;

    printf("Customer IDNO : %d \n",id);
    printf("Customer Name : %s \n",name);
    printf("unit Consumed : %d \n",unit);

    printf("Amount Charges @Rs. %f per unit : %0.2f \n",ucharge,amount);
    printf("Surchage Amount :%0.2f \n",surcharge);
    printf("Net Amount Paid By the Customer :%0.2f",total);

    return 0;
}
