#include<stdio.h>
int main()
{
        int fisrtarray[2][3],secondarray[2][3],sumarray[2][3];//2 country 3 state
        

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter first array data for country %d and state %d : ",i,j);
            scanf("%d",&fisrtarray[i][j]);
        }
    }

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("Enter second array data for country %d and state %d : ",k,l);
            scanf("%d",&secondarray[k][l]);
        }
    }

// Now these loops are printing of matrixs.

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",fisrtarray[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d ",secondarray[k][l]);
        }
        printf("\n");
    }

    printf("\n");

// noe we are printing sum of two array.

    for (int i = 0,k = 0,s = 0; i < 2,k < 2,s < 2; i++,k++,s++)
    {
        for (int j = 0,l = 0,t = 0; j < 3,l < 3,t < 3; j++,l++,t++)
        {
            sumarray[s][t] = fisrtarray[i][j] + secondarray[k][l];
            printf(" %d  ",sumarray[s][t]);
        }
        printf("\n");
    }
    
    return 0;
}