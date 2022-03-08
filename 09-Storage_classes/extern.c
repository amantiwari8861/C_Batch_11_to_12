#include<stdio.h>
extern int num2; //it will not get the memory
int main()
{
    num2=55;//throws error
   
    printf("in main fxn num2 = %d \n",num2);

    return 0;
}
