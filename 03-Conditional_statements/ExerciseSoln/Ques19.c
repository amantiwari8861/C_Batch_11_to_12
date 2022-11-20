#include<stdio.h>
int main()
{
    int units,custId,amount;
    float surcharge=0,payble;
    printf("enter the customer id :");
    scanf("%d",&custId);
    printf("enter the unit consumed :");
    scanf("%d",&units);

    if (units<200 && units>0)
    {
       amount=units*1.20;
    }
    else if (units>=200 && units<400)
    {
        amount=units*1.50;
    }
    else if (units>=400 && units<600)
    {
        amount=units*1.80;
    }
    else if(units>=600)
    {
        amount=units*2;
    }
    else
    {
        printf("invalid unit!");
    }
    
    if (amount>400)
    {
        surcharge=amount*15.0/100.0;
        printf(" ur surcharge is %0.2f \n",surcharge);
    }

    printf("Payble amount is %0.2f \n",(amount+surcharge)); 
    return 0;
}
