#include<stdio.h>

float solveEqn(float,float);//declaration

int main()
{
    float a=3,b=2,result;
    result=solveEqn(a,b);
    printf(" The result is %f \n",result);
    return 0;
}
float solveEqn(float a,float b) //body
{
    return a*a+b*b+2*a*b;
}