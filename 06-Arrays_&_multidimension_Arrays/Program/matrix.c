#include<stdio.h>
int main()
{
        // int covidCases[2][3];//2 country 3 state
        int covidCases[][3]={
            {10,20,30},{40,50,60}
        };

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("enter the data for country %d and state %d : ",i,j);
    //         scanf("%d",&covidCases[i][j]);
    //     }
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("the cases in country %d and state %d : %d \n",i,j,covidCases[i][j]);
            printf(" %d ",covidCases[i][j]);
        }
        printf("\n");
    }
    return 0;
}