#include<stdio.h>
void hello();

int mynum=99;//global variable 
int main()
{
    // printf(" num= %d \n",num);
    // {
    //     int num=88;
    // }
    // printf(" num= %d \n",num);
    printf(" mynum= %d \n",mynum);
    mynum=55;
    hello();

    for (int i = 0; i < 10; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" ");
    }
    printf(" i=%d \n",i);


    return 0;
}
void hello()
{
    int num=56;
    printf(" mynum= %d \n",mynum);
}