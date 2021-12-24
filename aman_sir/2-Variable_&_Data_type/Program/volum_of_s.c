// Volume fo sphere
#include<stdio.h>

int main()
{
    float pi = 3.14 , r , result;
    printf("The value of redius is = ");
    scanf("%f",&r);

    // result=4/3*pi*r*r*r;    // this gives worng answer.
    // result=(4*pi*r*r*r)/3;  // this is a another way.
    result = 4.0/3.0*pi*r*r*r;  // this is a right way.

    printf("Volume of sphere = %0.2f",result);

    return 0;
}