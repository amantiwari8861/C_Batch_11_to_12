#include<stdio.h>
int halwai(int,int);

int main()
{
    int milk=10,sugar=30;
    int sweet=halwai(milk,sugar);
    printf("sweet= %d in main",sweet);

    return 0;
}
int halwai(int utensil,int sugar)
{
    int sweet=utensil+sugar;
    // printf(" milk= %d sugar=%d  sweets(in KG)=%d \n",utensil,sugar,sweet);
    return sweet;
}