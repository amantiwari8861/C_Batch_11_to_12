#include<stdio.h>

int main()
{
    
    for (int i = 0; i < 9; i++)
    {
        printf("\n");
        for (int space = 9; space >i+1; space--)
        {
            if (i%2 != 0 )
            {
                printf(" ");
            }        
        }
        for (int star = 1; star <= i; star++)
        {
            if (i%2 != 0 )
            {
                printf("* ");
            }
        }
    }
     for (int i = 0; i < 9; i++)
    {
        for (int space = 0; space <= i+1; space++)
        {
            if (i%2 != 0 )
            {
                printf(" ");
            }        
        }
        for (int star = 6; star > i; star--)
        {
            if (i%2 != 0 )
            {
                printf("* ");
            }
        }
        printf("\n");
    }


    return 0;
}
