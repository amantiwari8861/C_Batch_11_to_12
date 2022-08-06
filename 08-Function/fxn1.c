#include<stdio.h>
void add();//fxn declaration 
//user defined fxn
int main(/* arguments(parameters) */)//starting point of program
{
    printf("before calling in main \n");
    add();//calling of fxn   
    printf("after calling in main \n");
    return 0;//ending point of program
}
void add(/*parameter*/)
{   //body open
    printf("hii i am adding something\n");// code
    //void is fxn return type
}   //body close


//fxn is a group of statements that together perform a task.
//functions has two types 
//1.built-in fxn eg. pow,sqrt,log,sin,sinh,floor,ceil
//2.user defined fxn eg. add
//user defined fxn has 4 types
//type 1 fxn : no argument(parameter) no return type
//type 2 fxn : with argument(parameter) no return type
//type 3 fxn : no argument(parameter) with return type
//type 4 fxn : with argument(parameter) and return type