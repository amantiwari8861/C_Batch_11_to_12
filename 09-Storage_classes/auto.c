#include<stdio.h>
#include "myheaderfile.h"
// extern int num2; //it will not get the memory
int main()
{
    // auto int num=45;
    // num2=55;//throws error
    // printf("auto %d \n",num);
   
    printf("in main fxn num2 = %d \n",num2);
    myfunc();
    register int i = 10;
    
    printf("the value of register variable i = %d \n",i);
    printf("the result is : %d \n",add(10,20));

    return 0;
}
/* 
Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope,
visibility and lifetime of a variable.

There are 4 types of storage class:
automatic or auto( local variables )
external or extern ( global variable )
static
register 

Variable stored in a CPU register can always be accessed faster 
than the one that is stored in memory. Therefore,
 if a variable is used at many places in a program,
  it is better to declare its storage class as register
*/
