// 5. Write a program in C to display the cube of the number upto given an integer.

#include <stdio.h>

int main()
{
    int num, cube = 0;

    printf("Enter the n term value = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        cube = i * i * i;
        printf("The cube of %d number = %d \n", i, cube);
    }

    return 0;
}
