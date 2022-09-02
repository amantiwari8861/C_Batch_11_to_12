#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr2;
    // ptr2=(int*)malloc(5*sizeof(int));
    ptr2=(int*)calloc(5,sizeof(int));
    ptr2[0]=10;
    // *(ptr2+0)=10;
    printf("Enter the value of ptr2[0]:");
    scanf("%d",(ptr2+2));
    *(ptr2+1)=20;
    // *(ptr2+2)=30;
    *(ptr2+3)=40;
    *(ptr2+4)=50;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr2+i));
    }
    ptr2=realloc(ptr2,7*sizeof(int));
    *(ptr2+5)=70;
    *(ptr2+6)=90;
    for(int i=0;i<7;i++)
    {
        printf("%d \t",*(ptr2+i));
    }
    free(ptr2);
    return 0;
}

