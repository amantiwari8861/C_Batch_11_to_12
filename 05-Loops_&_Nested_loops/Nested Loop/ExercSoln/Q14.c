#include<stdio.h>
int main()
{
//     1
//    121
//   12321
//  1234321
// 123454321
    for (int i = 1; i <= 5; i++)
    {
        for (int sp = 5; sp > i; sp--)
        {
            printf(" ");
        }
        for (int c1 = 1; c1 <= i; c1++)
        {
            printf("%d",c1);
        }
        for (int c2 = 1; c2 < i; c2++)
        {
            printf("%d",i-c2);
        }
        printf("\n");
    }
    




    return 0;
}
