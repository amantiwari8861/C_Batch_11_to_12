#include<stdio.h>

int main()
{
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);//12
    if (num&1)
    {
        printf("odd !\n");
    }
    else
    {
        printf("even ! \n");
    }
    return 0;
}
/* explanation:
    12 & 1 = 1100 & 1 = 0
    11 & 1 = 1011 & 1 = 1
    if the last bit is 1 then it is odd
    if the last bit is 0 then it is even
*/
