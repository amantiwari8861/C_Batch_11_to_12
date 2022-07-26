#include<stdio.h>
#include<stdlib.h>
int main()
{
    // void *arr=NULL;
    int *arr;
    // printf("the size of arr is %d \n",sizeof(arr));
    // arr=malloc(4*sizeof(int));
    arr=(int*)malloc(4*sizeof(int)); //good programming practice
    // arr=calloc(4,sizeof(int));//initiaize with zero
    // printf("the size is %d \n",sizeof(arr));
    *(arr+0)=50;
    *(arr+1)=60;
    *(arr+2)=70;
    *(arr+3)=90;
    // printf("the size is %d \n",*arr);
    // printf("the size is %d \n",*(arr+1));
    // printf("the size is %d \n",*(arr+2));
    // printf("the size is %d \n",*(arr+3));
    printf("----------------------\n");

    arr=(int*)realloc(arr,6*sizeof(int));
    *(arr+4)=110;
    *(arr+5)=120;
    // printf("the size is %d \n",*arr);
    printf("the size is %d \n",*(arr+0));
    printf("the size is %d \n",*(arr+1));
    printf("the size is %d \n",*(arr+2));
    printf("the size is %d \n",*(arr+3));
    printf("the size is %d \n",*(arr+4));
    printf("the size is %d \n",*(arr+5));

    free(arr);
    printf("the size is %d \n",*(arr+0));
    printf("the size is %d \n",*(arr+1));
    printf("the size is %d \n",*(arr+2));
    printf("the size is %d \n",*(arr+3));
    printf("the size is %d \n",*(arr+4));
    printf("the size is %d \n",*(arr+5));

    return 0;    
}