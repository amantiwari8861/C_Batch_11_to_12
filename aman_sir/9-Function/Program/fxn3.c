// no argument with return type.
#include<stdio.h>

int add();
int main()
{
    
    printf("Before calling main.");
    int sum = add();
    printf("\nThe sum is = %d",sum);
    printf("\nAfter calling main.");
    return 0;
}
int add()
{
    int a=10,b=20;
    return (a+b);
}