#include<stdio.h>
#include<math.h>
float TSA(float);
float CSA(float);
float volume(float);
float height(float);

const float pi=3.14;

int main()
{
    float r;
    printf("enter the radius of cone:");
    scanf("%f",&r);

    printf(" TSA is %f \n",TSA(r));
    printf(" CSA is %f \n",CSA(r));
    printf(" volume is %f \n",volume(r));
    printf(" height is %f \n",height(r));

    return 0;
}
float TSA(float r)
{
    printf("\n--------------Finding TSA-----------------------\n");
    float l;
    printf("enter l :");
    scanf("%f",&l);
    return pi*r*(l+r);
}
float CSA(float r)
{
    printf("\n--------------Finding CSA-----------------------\n");
    float l;
    printf("enter l :");
    scanf("%f",&l);
    return pi*r*l;
}
float volume(float r)
{
    printf("\n--------------Finding volume-----------------------\n");
    float h;
    printf("enter h :");
    scanf("%f",&h);
    return 1.0/3.0*pi*r*r*h;
}
float height(float r)
{
    printf("\n--------------Finding height-----------------------\n");
    float l;
    printf("enter l :");
    scanf("%f",&l);
    return sqrt(pow(l,2)-pow(r,2));
}