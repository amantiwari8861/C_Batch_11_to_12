#include<stdio.h>
int main()
{
    /*
    types of loop : 
    1. for
    2. while 
    3. do-while

    syntax of for loop :
    for (initialization; condition;increment/decrement)
    {
        statements
    }
    */
    //  int a; //declaration
    //  a=10; //initialization
    //  int b=50; // declaration and initialization
    //  a++ ; // increment  => 10 +1 => 11
    //  a-- ; // decrement  => 11 -1 => 10
    int i;
    // for ( i = 1; i <= 10; i++)
    // {
    //     printf(" %d \n",i);  //1 2 3 4 5 6 7 8 9 10 => 11 x
    // }
    //-------------------------------------------------------------------------
    // for ( i = 10; i > 0; i--)
    // {
    //     printf("the value of i is %d \n",i);
    // }
    //------------------------------------------------------------------------
     for ( i = 10; i >= 5; i--)
    {
        printf("the value of i is %d \n",i);
    }
      


    return 0;
}
