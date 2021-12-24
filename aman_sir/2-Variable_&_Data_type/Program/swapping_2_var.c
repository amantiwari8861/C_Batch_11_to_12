#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a and b : \n");
    scanf("%d%d", &a, &b);

    printf("The value of a =%d and b =%d before swapping ", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a =%d and b =%d after swapping ", a, b);

    return 0;
}