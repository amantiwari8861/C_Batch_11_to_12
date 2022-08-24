// convert fahrenheit to celsius => (98.6°F − 32) × 5/9 = 37°C;
#include<stdio.h>
int main()
{
    float f,celcius;
    printf("enter the value of farhenheight ");
    scanf("%f",&f);//98.6

    // celcius= f-32* 5.0/9.0;//error in value 80.83
    celcius= (f-32)* 5.0/9.0;//37.00

    printf("the celcius is %f \n",celcius);


    return 0;
}
