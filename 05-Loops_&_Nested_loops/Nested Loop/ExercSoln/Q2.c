#include<stdio.h>
int main()
{
    
    for (int row = 0; row < 5; row++)
    {
        for(int col=0;col<=row;col++)
        {
            printf("row=%d col=%d \t",row,col);
            // printf("*");
        }
        printf("\n");
    }
    
    return 0;
}