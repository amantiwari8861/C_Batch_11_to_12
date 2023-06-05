#include <stdio.h>
int main()
{
    // take a ,n,d from user and print the A.P (arithematic progression)    
    //             let a=10  n=6 d=3
    //             a  a+d  a+2d a+3d a+4d  a+5d
    //             10  13  16 19 22 25 Ans.

    int a, n, d, i,temp=0;
    printf("enter the value of a :");
    scanf("%d", &a);
    printf("enter the value of n :");
    scanf("%d", &n);
    printf("enter the value of d :");
    scanf("%d", &d);

    for (i = 1; i <= n; i++)
    {
        temp= a + (i - 1) * d;
        printf("%d ",temp);
    }
    return 0;
}