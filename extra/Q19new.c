#include<stdio.h>
int main()
{
    int unit;
    printf("enter unit consumed:");
    scanf("%d",&unit);

    float amount,surcharge;

    if (unit>0 && unit<200)
    {
        amount=unit*2.20;
    }
    else if (unit>=200 && unit<400)
    {
        amount=unit*4.50;
    }
    else if (unit>=400 && unit<600)
    {
        amount=unit*6.80;
    }
    else if (unit>=600)
    {
        amount=unit*8.0;
    }
    else
    {
        printf("unit can't be negative\n");
        return 0;
    }

    printf("Amount = %f \n",amount);
    
    if (amount>1000)
    {
        surcharge=amount*15.0/100.0;
        amount=amount+surcharge;
        printf("Surcharge = %f \n",surcharge);
    }
    if (amount<200)
    {
        amount=200;
        printf("minimum bill should be Rs. 200 \n");
    }

    printf("Final Amount = %f \n",amount);

    
    

    
    


    return 0;
}
