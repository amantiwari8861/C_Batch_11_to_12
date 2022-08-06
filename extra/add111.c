#include<stdio.h>
int halwai();

int main()
{
    int sweet=halwai();
    printf("sweet= %d in main",sweet);

    return 0;
}
int halwai()
{
    int milk=10,sugar=30;
    int sweet=milk+sugar;
    printf(" milk= %d sugar=%d  sweets(in KG)=%d \n",milk,sugar,sweet);
    return sweet;
}