#include<stdio.h>
int main()
{
    int units;
    float rate,total=-1,fifteen;

    printf("Enter the units consumed : ");
    scanf("%d",&units);

    if(units>=0 && units<=199)
    {
        rate=1.20;
        total=units*rate;
    }
    else if(units>=200 && units<=399)
    {
        rate=1.50;
        total=units*rate;
    }
    else if(units>=400 && units<=599)
    {
        rate=1.80;
        total=units*rate;
    }
    else if (units>=600)
    {
        rate=2.00;
        total=units*rate;
    }
    else
    {
        printf("invalid unit Reading !\n");
    }
    
    if (total>=400)
    {
        fifteen=total*15/100;//15% surcharge
        printf("\n(total + Surcharge@15%%) =  %f + %f  \n",total,fifteen);
        total=total+fifteen; //total=total+total*15/100;
    }
    if (total<=100  && total>=0)
    {
        total=100;
    }

    if(total>=100)
    printf("Total amount to be paid : %0.2f\n",total);
    
    return 0;
}
