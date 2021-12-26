// 4. Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include <stdio.h>

int main()
{
    int num, sum = 0,n;
    float ave = 0;
    printf("Enter the last term value = ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d number = ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    ave = sum / n;

    printf("The sum of all numbers = %d \n", sum);
    printf("The average of all natural number = %0.2f", ave);

    return 0;
}
