#include<stdio.h>
int main()
{
    // convert fahrenheit to celsius => F − 32 × 5/9;
    float fahrenheit,celcius;
    printf("enter the fahrenheit:");
    scanf("%f",&fahrenheit);

    celcius=(fahrenheit-32)*5/9;

    printf("the value in Celcius is %f \n",celcius);
    return 0;
}// surface area of cylinder => 2*pi*r*r+2*pi*r*h;
