#include<stdio.h>
int main()
{
    int unit,custid;
    float amount,surcharge;
    printf("enter the customer id :");
    scanf("%d",&custid);

    printf("enter unit consumed :");
    scanf("%d",&unit);

    if (unit >0 && unit<200)
    {
        amount=unit*1.20;
    }
    else if (unit>=200 && unit<400)
    {
        amount=unit*1.50;
    }
    else if (unit>=400 && unit<600)
    {
        amount=unit*1.80;
    }
    else if (unit>=600 )
    {
        amount=unit*2.0;
    }
    else
    {
        printf("invalid unit ");
    }
    
    if (amount>400)
    {
        surcharge=amount*15.0/100.0;
        printf("added surcharge @15%% : %f \n",surcharge);
        amount=amount+surcharge;
    }
    if (amount<100)
    {
        printf("minimum bill of Rs. 100 \n");
        amount=100;
    }
    

    printf("the final amount is %0.2f \n",amount);



    return 0;
}
