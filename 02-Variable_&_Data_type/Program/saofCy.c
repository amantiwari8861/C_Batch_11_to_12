#include<stdio.h>
int main()
{
    float r,h,pi=3.14,result;
    printf("enter the value of radius and height\n");
    scanf("%f%f",&r,&h);

    result=2*pi*r*r + 2*pi*r*h;

    printf("the result is %f \n",result);

    return 0;
}
