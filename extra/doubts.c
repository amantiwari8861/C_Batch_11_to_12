#include<stdio.h>
int main()
{
    // int numerator,denominator,remainder;
    // printf("enter nume. & denom. \n");
    // scanf("%d%d",&numerator,&denominator);

    // remainder = numerator%denominator;

    // printf("the remainder is %d \n",remainder);

    float side,volumeOfCube;
    printf("enter side :");
    scanf("%f",&side);

    volumeOfCube=side*side*side;

    printf("the volume of cube is %f \n",volumeOfCube);


    return 0;
}
