
// This is 2D array.

#include <stdio.h>

int main()
{
    int covid[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the data for country %d and state %d = ", i, j);
            scanf("%d", &covid[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The cases in country %d and state %d : %d \n", i, j, covid[i][j]);
        }
    }

    return 0;
}
