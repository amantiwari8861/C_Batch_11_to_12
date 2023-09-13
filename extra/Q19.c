#include<stdio.h>
int main()
{
    int unit;
    float amount,fifteen;
    printf("enter the unit consumed:");
    scanf("%d",&unit);

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
    else if (unit>600)
    {
        amount=unit*8.0;
    }
    else
    {
        printf("invalid unit \n");
    }
    
    printf("the amount is %f \n",amount);
    
    if (amount>=1000)
    {
        fifteen=amount*15.0/100.0;
        printf("the 15%% of %f is %f \n",amount,fifteen);
        amount=amount+fifteen;
    }

    if (amount>0 && amount<200)
    {
        printf("the minimum bill is 200 \n");
        amount=200;
    }

    printf("the net Amount is %f \n",amount);
    return 0;
}
