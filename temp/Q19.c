#include<stdio.h>
int main()
{
    int unit;
    printf("enter the unit consumed:");
    scanf("%d",&unit);
    float amount;

    if (unit>=0 && unit<=199)
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
        printf("invalid unit!");
    }
    
    if (amount>1000)
    {
        printf("15%% added in %f => %f \n",amount,amount+amount*0.15);
        amount=amount+amount*0.15;
    }
    if (amount<200)
    {
        printf("minimum bill is 200/-\n");
        amount=200;
    }

    printf("the net Amount to pay is %.2f \n",amount);


    return 0;
}




// W/D Am C@6 
// rajneet Kaur 16390
// kashish gupta 16391