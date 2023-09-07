#include <stdio.h>
#include <math.h>

int armStrong(int);
int main()
{
    int n,isArmstrong=0;
    printf("Enter a number :");
    scanf("%d", &n);

    if (n >= 0)
    {
        // isArmstrong=armStrong(n);
        // if (isArmstrong==1)
        if (armStrong(n))
        {
            printf("%d is Armstrong No.",n);
        }
        else
        {
            printf("%d is not an Armstrong no.",n);
        }        
    }
    else
    {
        printf("Invalid number!!");
    }

    return 0;
}

int armStrong(int num)
{
    if (num<10)
    {
        return 1;
    }
    int rem = 0, arms = 0, digitLen = 0, temp = 0, temp2 = 0;
    temp = num;
    temp2 = num;
    while (temp > 0)
    {
        digitLen++;
        temp = temp / 10;
    }
    printf("u inputed %d digit no.\n",digitLen);
    while (num > 0)
    {
        rem = num % 10;
        arms = arms + pow(rem, digitLen);
        num = num / 10;
    }
    return temp2==arms ? 1 : 0;
}