#include<stdio.h>
int main()
{
    
    int num=80;

    printf(" num =%d \n",num);
    printf("address of num =%d \n",&num);

    int *ptr;

    ptr=&num;

    printf("the value in pointer is %d \n",ptr);

    // Aestrik (*)   means value at address

    printf("the value at pointer's address is %d \n",*ptr);//value at address ptr
    
    *ptr=98;

    printf(" the value of num =%d \n",num);
    return 0;
}
