#include<stdio.h>
int main()
{
    
    for (int row = 1; row <= 5; row++)
    {
        for(int space=5;space>row;space--)
        {
            printf(" ");
        }
        for (int i = 1; i <= row; i++)
        {
            printf("%d",i);
        }
        for(int j=row-1;j>0;j-- )
        {
            printf("%d",j);
        }
        printf("\n");
    }
    

    return 0;
}
