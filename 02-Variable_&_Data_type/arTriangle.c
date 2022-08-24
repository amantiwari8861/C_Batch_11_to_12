#include<stdio.h>
int main()
{
    // area of triangle => 1/2*b*h;
    float b,h,arTri;
    printf("enter base :");
    scanf("%f",&b);//12
    printf("enter height:");
    scanf("%f",&h);//3

    // arTri=1/2*b*h;  //value error bcz at runtime 1/2 = 0.5 expected
                      // but it resolved 0.5 -> 0 then 0*b*h became 0
    arTri=1.0/2.0*b*h;

    printf("area of triangle is %f \n",arTri);
    
    return 0;
}
