#include<stdio.h>
#include<math.h>
int main(/*parameters*/)
{
    // A function is a group of statements that together perform a task. ...
    //  A function declaration tells the compiler about a function's name, return type, and parameters. 
    //  A function definition provides the actual body of the function.
    //  The C standard library provides numerous built-in functions that your program can call.

    int num=5;
    // int result=pow(num,2);//25
    // int result=sqrt(625);//25
    float result=log(2);//0.69
    // float result=log10(2);
    // float result=log2(2);
    // float result=sin(90);//0.89 value given in radian
    // float result=sinh(90);
    // float result=floor(3.99);//3  downward rounding
    // float result=ceil(3.000001);//4 upward rounding

    printf("the power is %f  %f \n",result,log2(2));

    return 0;
}
//reusability of code
//modularity (independent to each other)
//increase readibility
//decreases time and complexity