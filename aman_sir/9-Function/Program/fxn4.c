// with argument with return type
#include<stdio.h>

int add(int,int);
int main()
{
    int a=10,b=20,sum;
    sum = add(a,b);
    printf("The sum is = %d",sum);

    return 0;
}
int add(int num1,int num2)
{
    printf("\nThis is addition.");
    return (num1+num2); 
}
