#include<stdio.h>
int main()
{
    float miles,kilometers;
    printf("enter miles:");
    scanf("%f",&miles);

    kilometers=1.609*miles;

    printf("kilometers = %.2f \n",kilometers);
    
    return 0;
}