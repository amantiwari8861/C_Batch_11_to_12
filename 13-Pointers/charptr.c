<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="hello everyone";
    char *ptr;
    ptr=arr;
    printf("the address of %d is arr[0] \n",&arr[0]);
    printf("the address in ptr is %d  \n",ptr);
    printf("the length of name is %d \n",strlen(arr));
    printf("the length of name is %d \n",strlen(ptr));
    int len=strlen(ptr);
    for (int i = 0; i < len; i++)
    {
        printf("the value at %d position is %c \n",i,*ptr);
        ptr++;
    }
    return 0;
}
=======
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="hello everyone";
    char *ptr;
    ptr=arr;
    // printf("the address of %d is arr[0] \n",&arr[0]);
    // printf("the address in ptr is %d  \n",ptr);
    // printf("the length of name is %d \n",strlen(arr));
    // printf("the length of name is %d \n",strlen(ptr));
    int len=strlen(ptr);
    for (int i = 0; i < len; i++)
    {
        printf("the value at %d position is %c \n",i,*ptr);
        ptr++;
    }
    return 0;
}
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
