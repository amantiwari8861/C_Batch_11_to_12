#include<stdio.h>
int main()
{
    // //1. casting int to float
    // int num=50;
    // float f;
    // f=num;//implicit type casting
    // // or
    // f=(float)num;//compiler implicitly doing this to num
    // // f=f+0.2;
    // printf("the value of f is %f\n",f);

    //2. casting float to int
    // float f2=35.76;
    // int num2;
    // num2=f2;
    // //// or
    // //// num2=(int)f2; //compiler automatically doing this
    // printf("the value of num2 is %d\n",num2);

    //3.casting int to char
    // int num3=65;
    // char ch2;
    // ch2=num3;
    // // ch2=(char)num3;//compiler automatically doing this
    // printf("the value of ch2 is %c\n",ch2);

    //4.casting char to int
    char ch3='A';
    int num4;
    num4=ch3;
    // num4=(int)ch3;//compiler automatically doing this
    printf("the value of num4 is %d\n",num4);

    return 0;
}