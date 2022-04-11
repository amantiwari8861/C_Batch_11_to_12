#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr2;
    // ptr2=(int*)malloc(5*sizeof(int));
    ptr2=(int*)calloc(5,sizeof(int));
    printf("input the value \n");
    *(ptr2+0)=10;
    *(ptr2+1)=20;
    *(ptr2+2)=30;
    *(ptr2+3)=40;
    // Sleep(2000);//to sleep the program  (in miliseconds )
    // sleep(5);//to sleep the program  (in seconds )
    system("color 86");//to change color
    system("cls"); //for clearing previous output
    *(ptr2+4)=50;
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

