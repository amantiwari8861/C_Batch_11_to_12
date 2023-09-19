#include<stdio.h>
#include<windows.h>
int main()
{
    int space=7;
    for (int row = 1; row <= 16; row++)
    {
        for (int col = 1; col <= 8; col++)
        {
            if (col<=space)
            {
                printf(" ");
                // Sleep(500);
            }
            else
            {
                if(row<=12)
                printf("\x1b[32m* \x1b[0m");
                else 
                printf("\x1b[33m* \x1b[0m");
            }
        }
        // Sleep(2000);
        if (row<12)
        {
            if (row%4==0)
            {
                space++;
            }
            else
            {
                space--;
            } 
        }
        else
        {
            space=4;
        }
        printf("\n");
    }
    



    return 0;
}
