#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    // ptr=(int*)malloc(5*sizeof(int));
    ptr=(int*)calloc(4,sizeof(int));
    *(ptr+0)=10;
    *(ptr+1)=20;
    *(ptr+2)=30;
    *(ptr+3)=40;

    printf("the pointer is :\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);

//     ptr=(int*)malloc(5*sizeof(int));
//    *(ptr+0)=40;
//     *(ptr+1)=50;
//     *(ptr+2)=60;
//     *(ptr+3)=70;

//     printf("the pointer is :\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\n",*(ptr+i));
//     }


    return 0;
}