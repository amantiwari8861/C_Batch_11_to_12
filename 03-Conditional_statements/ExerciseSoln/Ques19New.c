#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int customerId;
    float unit,amount,surcharge;

    printf("enter unit:");
    scanf("%f",&unit);

    if (unit>=0 && unit<200)
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
        printf("invalid unit\n");
        exit(0);
    }
    
    if (amount<200)
    {
        amount=200;
    }
    if (amount>=1000)
    {
        surcharge=(amount*15.0)/100.0;
        printf("Extra Surcharge of @15%% on %.2f added i.e %.2f \n",amount,surcharge);
        amount=amount+surcharge; 
    }
    
    printf("Net Amount= %.2f \n",amount); 
    getch();
    return 0;
}
