#include<stdio.h>
#include<math.h>
float volumeOfSphere(float);
float cube(float);

int main()
{
    // float radius;
    // printf("enter radius:");
    // scanf("%f",&radius);

    // float result=volumeOfSphere(radius);
    // printf("the volume of sphere is %f \n",result);

    // printf("the volume of sphere is %f \n",3.6);
    // // printf("the volume of sphere is %f \n",volumeOfSphere());
    // printf("the volume of sphere is %f \n",volumeOfSphere(5.4));
    // printf("the volume of sphere is %f \n",volumeOfSphere(2));
    // printf("the volume of sphere is %f \n",volumeOfSphere(1.5));


    float f=pow(5,4);
    printf(" %f ",f);

    float s=sqrt(3);
    printf("%f",s);

    printf(" %f ",cube(4));


    return 0;
}
float volumeOfSphere(float r)
{
    float pi=3.14;
    return 4.0/3.0*pi*r*r*r;
}

float cube(float r)
{
    return r*r*r;
}
