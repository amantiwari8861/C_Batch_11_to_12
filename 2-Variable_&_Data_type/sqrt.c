#include<stdio.h>
#include<math.h>
int main()
{
    float pi=3.14,result,r;
    printf("enter the value of r :");
    scanf("%f",&r);
    // result=4.0/3.0*pi*pow(r,3);
    result=(float)4/3*pi*pow(r,3);
    // result=(4*pi*pow(r,3))/3;
    printf("the result is %f  %f \n",result,sqrt(25));
    return 0;
}
