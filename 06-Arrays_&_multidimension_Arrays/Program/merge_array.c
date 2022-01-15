#include <stdio.h>

int main()
{
    int array1[3] = {1, 2, 3}, array2[3] = {4, 5, 6}, array3[6];

    /* for (int i = 0; i < 3; i++)
    {
        array3[i] = array1[i];
        printf("%d,", array3[i]);
    }

    for (int i = 3, j = 0; i < 6, j < 3; i++, j++)
    {
        array3[i] = array2[j];
        printf("%d,", array3[i]);
    } */

    for (int i = 0; i < 6; i++)
    {
        if (i<3)
        {
            array3[i]=array1[i];
        }
        else
        {
            array3[i]=array2[i-3];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf(" %d ",array3[i]);
    }
    
    

    return 0;
}
