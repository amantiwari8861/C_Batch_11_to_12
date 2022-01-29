#include<stdio.h>
void fxn2(int);
int modi=200; //global variable or external variable
// extern int modi=200; //global variable or external variable
void fxn()
{
    // int num5;
    // printf("the value of num is %d \n",num); //error
    printf("the value of modi in fxn is %d \n",modi);
}
int main()
{
    // int num=100;//local variable or automatic variables 
    //compiler automatic adds auto keyword in every variable which is inside the
    //curly brackets i.e { } and outside these curly brackets there will be no
    //scope for this variable
    auto int num=100; //actual code by compiler
    fxn();
    fxn2(num); // sending copy of variable to fxn2 or pass by value
    printf("the value of modi in main is %d \n",modi);
    return 0;
}
void fxn2(int number)// the value of num is copied to number variable
{
    printf(" number in fxn2 %d \n",number);
}