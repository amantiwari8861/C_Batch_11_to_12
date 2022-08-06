#include<stdio.h>
// void halwai(int milk,int sugar);
void halwai(int,int);

int main()
{
    int milk=10,sugar=30;
    halwai(milk,sugar);
    // printf("sweet= %d ",sweet);

    return 0;
}
void halwai(int utensil,int sugar)
{
    int sweet=utensil+sugar;
    printf(" milk= %d sugar=%d  sweets(in KG)=%d \n",utensil,sugar,sweet);
}