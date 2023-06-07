#include<stdio.h>
int main()
{
    int covidcases[3][4]={
        {10,23,45,56},
        {12,3454,5454,54},
        {12,34,56,5}
    };
    // printf("enter the covid cases:\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("enter data of country %d :\n",i);
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("\t State %d :",j);
    //         scanf("%d",&covidcases[i][j]);
    //     }
    // }
    printf("covid cases are:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Cases in country %d :\n",i);
        for (int j = 0; j < 4; j++)
        {
            printf("\tState %d :",j);
            printf(" %d  \n",covidcases[i][j]);
        }
        printf("\n");
    }  

    printf("the cases in country 1 and state 2 is %d ",covidcases[1][2]);


    return 0;
}
