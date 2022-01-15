#include<stdio.h>
int main()
{
    float r,h,result,pi=3.14;
    printf("enter the value of r and h \n");
    scanf("%f %f",&r,&h);

    result=pi*r*r*h;
    printf("the result is %0.2f \n",result);
    
    return 0;
}
