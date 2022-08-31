#include<stdio.h>
int main()
{
    
    int num=50;
    printf(" num = %d \n",num);
    printf("address of num = %d \n",&num);

    // &  means address of 

    // Syntax :   data_type *pointername;
    int *ptr;
    ptr=&num;

    printf("value in ptr = %d \n",ptr);
    printf("value at address in ptr = %d \n",*ptr);  
    // * means value at address
    
    *ptr=80;
    printf("value at address in ptr = %d after changing \n",*ptr);  
    printf(" num= %d \n",num);
    return 0;
}
