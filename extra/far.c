#include<stdio.h>
int main()
{
    //F − 32 × 5/9
    float far,celcius;
    printf("enter farenheight:");
    scanf("%f",&far);

    celcius=(far-32)* 5/9;

    printf(" celcius is %f \n",celcius);

    return 0;
}
