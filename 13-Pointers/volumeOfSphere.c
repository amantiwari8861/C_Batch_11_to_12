#include<stdio.h>
void voS(float,float*);
int main()
{
    
    float radius=2.5,result=0;

    voS(radius,&result);
    printf("the result is %f \n",result);
    return 0;
}

void voS(float radius,float *result)
{
    *result=4.0/3.0*3.14*radius*radius*radius;//65.42
}