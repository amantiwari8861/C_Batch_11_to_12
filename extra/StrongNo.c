#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    // 145 = 1! + 4! + 5!   => 1+24+120 => 145
    int num, rem, sum = 0, original;
    printf("enter number:");
    scanf("%d", &num);//let  num=145

    original = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + factorial(rem);
        num = num / 10;//1.4=> 1
    }

    if (sum == original)
    {
        printf("Strong No. \n");
    }
    else
    {
        printf("not strong no.\n");
    }
    return 0;
}