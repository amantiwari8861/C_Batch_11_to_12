#include<stdio.h>
int main()
{
    int num=10;
    // ! (logical not)
    //  ~ (bitwise not) 
    // printf(" %d ",~num);
    printf(" left shift %d \n",num<<1);  // 10*2 => 10
    printf(" left shift %d \n",num<<2);  // 10*2*2 => 40
    printf(" left shift %d \n",num<<3);  // 10*2*2*2 => 80
    printf(" left shift %d \n",num<<4);  // 10*2*2*2*2 => 160
    int num2=84;
    printf(" right shift %d \n",num2>>1);  // 84/2 => 42
    printf(" right shift %d \n",num2>>2);  // (84/2)/2 => 21
    printf(" right shift %d \n",num2>>3);  // ((84/2)/2)/2 => 10.5 -> 10
    printf(" right shift %d \n",num2>>4);  // (((84/2)/2)/2)/2 => 5

    return 0;
}
