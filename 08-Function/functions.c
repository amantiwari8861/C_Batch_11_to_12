#include<stdio.h>
#include<math.h>
int main(/*parameters*/)
{
    // A function is a group of statements that together perform a task. ...
    //  A function declaration tells the compiler about a function's name, return type, and parameters. 
    //  A function definition provides the actual body of the function.
    //  The C standard library provides numerous built-in functions that your program can call.

    int num=5;
    int result=pow(num,4);//625
    float result=sqrt(625);//25
    float result=log(2);//0.69
    float result=log10(2);
    float result=log2(2);
    // 90Deg = 90 * pi/180 => 1.5708 Radian
    float result=sin(1.5708);// value given in radian
    float result=sinh(1);
    float result=floor(3.999);//3  downward rounding
    float result=ceil(3.2);//4 upward rounding
    printf("the power is %d \n",result);
    printf("the square root is %f \n",result);
    printf("the result is %0.2f \n",result);
    return 0;
}

//advangtages of fxn

//reusability of code
//modularity (independent to each other)
//increase readibility
//decreases complexity