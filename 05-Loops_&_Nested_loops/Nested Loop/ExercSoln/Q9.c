#include<stdio.h>
int main()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",65+i);
        }
        printf("\n");        
    }

    return 0;
}
