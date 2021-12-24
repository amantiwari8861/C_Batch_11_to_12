#include <stdio.h>
#include <math.h>

void arm(int);

int main()
{
    int n;

    printf("Enter 3 or more digit number = ");
    scanf("%d", &n);

    if (n > 100)
    {
        arm(n);
    }
    else
    {
        printf("Invalid !!");
    }

    return 0;
}

void arm(int num)
{
    int rem = 0, arms = 0, count = 0, temp = 0, temp2 = 0;
    temp = num;
    temp2 = num;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    while (num > 0)
    {
        rem = num % 10;
        arms = arms + pow(rem, count);
        num = num / 10;
    }
    if (temp2 == arms)
    {
        printf("%d is an armstrong number.", temp2);
    }
    else
    {
        printf("%d is not an armstrong number.", temp2);
    }
}