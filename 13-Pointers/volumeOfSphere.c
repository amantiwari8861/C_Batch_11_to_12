#include<stdio.h>
void volumeOfSphere(float,float*);
int main()
{   
    float radius=2.5,result=0;
    volumeOfSphere(radius,&result);
    printf("the result is %f \n",result);
    return 0;
}
void volumeOfSphere(float radius,float *result)
{
    *result=4.0/3.0*3.14*radius*radius*radius;//65.42
}