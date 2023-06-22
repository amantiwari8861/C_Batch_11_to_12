#include<stdio.h>
int main()
{
    int covidCases[2][3];//2 country 3 state
    // int covidCases[2][3]={
    //     {10,20,30},
    //     {40,50,60}
    // };
    // int covidCases[][3]={
    //     {10,20,30},
    //     {40,50,60}
    // };
    char countries[][20]={"India","America"};
    char states[2][3][20]={{"Delhi","MP","UP"},{"new York","san fransisco","san diego"}};

    for (int i = 0; i < 2; i++)
    {
        printf("\nenter the data for %s : ",countries[i]);
        for (int j = 0; j < 3; j++)
        {
            printf("\n\tenter the data of %s : ",states[i][j]);
            scanf("%d",&covidCases[i][j]);
        }
    }
    printf("\n------------------------------------------------------------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Covid Cases in %s :\n",countries[i]);
        for (int j = 0; j < 3; j++)
        {
            printf("\tthe cases in %s : %d \n",states[i][j],covidCases[i][j]);
        }
        printf("\n");
    }
    return 0;
}
