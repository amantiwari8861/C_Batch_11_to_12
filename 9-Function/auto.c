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

//auto -> local variable

