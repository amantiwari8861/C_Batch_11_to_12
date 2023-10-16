#include<stdio.h>
float volOfCylinder(float, float);
int main()
{
    float radius, height, result;
    printf("enter the radius:");
    scanf("%f",&radius);
    printf("enter the height:");
    scanf("%f",&height);

    result=volOfCylinder(radius, height);
    printf(" The result is %f \n",result);
    return 0;
}
float volOfCylinder(float r, float h)
{
    float pi=3.14;
    return pi*r*r*h;
}