#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    arr=(int*)malloc(4*sizeof(int)); 
    *(arr+0)=50;
    *(arr+1)=60;
    *(arr+2)=70;
    *(arr+3)=90;
   
    printf("----------------------\n");
    arr=realloc(arr,6*sizeof(int));
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

    return 0;    
}