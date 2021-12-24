// with argument no return type
#include<stdio.h>

void add(int,int);
int main()
{
    int a=10,b=20;
    printf("Before calling main.");
    add(a,b);
    printf("\nAfter caling main.");
    return 0;
}
void add(int a,int b)
{
    int sum = a+b;
    printf("\nthe sum is = %d",sum);
}