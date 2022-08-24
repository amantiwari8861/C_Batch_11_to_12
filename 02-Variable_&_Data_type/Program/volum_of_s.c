// Volume fo sphere
#include<stdio.h>

int main()
{
    float pi = 3.14 , r ,h, result;
    printf("The value of radius is = ");
    scanf("%f",&r);
    printf("The value of height is = ");
    scanf("%f",&h);

    result = 3.14*r*r*h;
    printf("Volume of sphere = %f \n",result);
    printf("Volume of sphere = %0.2f \n",result);

    return 0;
}