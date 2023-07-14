#include<stdio.h>
int main()
{
   for (int i = 0; i < 5; i++)
   {
    for (int j=5;j>i;j--)
    {
        printf("*");
    }
    printf("\n");
   }
   

    return 0;
}
