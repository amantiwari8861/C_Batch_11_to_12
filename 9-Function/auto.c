#include<stdio.h>
#include "myheaderfile.h"
// extern int num2; //it will not get the memory
int main()
{
    // auto int num=45;
    // num2=55;//throws error
    // printf("auto %d \n",num);
   
    printf("num2 = %d \n",num2);

    register int i = 10;
    
    printf("%d",i);

    return 0;
}
/* 
Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.

There are 4 types of storage class:
automatic or auto( local variables )
external or extern ( global variable )
static
register */
