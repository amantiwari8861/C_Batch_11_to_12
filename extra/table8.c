#include<stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf(" %2d x %2d=%2d  ",j,i,i*j);
            if (i==4)
            {
                break;//it will break only the inner loop
            }
        }
        printf("\n");
    }
    
    return 0;
}
