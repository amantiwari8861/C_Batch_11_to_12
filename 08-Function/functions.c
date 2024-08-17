#include<stdio.h>
#include<math.h>
void main(/*parameters*/)
{
    // A function is a group of statements that together perform a task. ...
    //  A function declaration tells the compiler about a function's name, return type, and parameters. 
    //  A function definition provides the actual body of the function.
    //  The C standard library provides numerous built-in functions that your program can call.

    // int num=5;
    // float res=pow(num,4);//625  //5^4
    // printf("the result is %f \n",res);
    
    // printf(" %f ",pow(2,7));

    // float result=pow(2.5,2);//6.25

    // float result=sqrt(3);//1.732
    // float result=log(2);//0.69
    // float result=log10(2);//0.30
    // float result=log2(2);
    // // // 90Deg = 90 * pi/180 => 1.5708 Radian
    // float result=sin(1.5708);// value given in radian
    // float result=sinh(1);
    // float result=abs(-56);
    // float result=floor(3.999);//3  downward rounding
    float result=ceil(3.000002);//4 upward rounding
    // printf("the result is %0.2f \n",result);

    printf(" %f \n",floor(-3.99999));
    // printf("%.15f",M_PI);

}
// There are 2 major types of functions
// Built-In function (pre-defined functions)
// User-defined function

//advantages of fxn
    //reusability of code
    //modularity (independent to each other)
    //increase readibility
    //decreases complexity