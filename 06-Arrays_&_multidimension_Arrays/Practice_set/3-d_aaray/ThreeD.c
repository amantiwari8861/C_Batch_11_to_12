#include<stdio.h>
int main()
{
    
    int covidCases[2][3][2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter Country %d data \n",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("\tEnter State %d data :\n",j+1);
            for (int k = 0; k < 2; k++)
            {
                printf("\t\tEnter City %d data :",k+1);
                scanf("%d",&covidCases[i][j][k]);
            }
        }        
    }
    printf("\n\t\tAll covid Cases \n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("cases in Country %d \n",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("\tcases in State %d  :\n",j+1);
            for (int k = 0; k < 2; k++)
            {
                printf("\t\tCases in City %d :",k+1);
                printf("%d \n",covidCases[i][j][k]);
            }
        }        
    }

    return 0;
}
