#include<stdio.h>
#include<windows.h>
int main()
{
    // int num[5];
    //country -> state 

    int covidCases[2][3];
    for (int i = 0; i < 2; i++)
    {
        printf("enter %d country data\n",i);
        for (int j = 0; j < 3; j++)
        {
            printf("\tenter %d state data :",j);
            scanf("%d",&covidCases[i][j]);
        }
    }
    printf("the data is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d",covidCases[i][j]);
            Sleep(1000);
        }
        Sleep(8000);
        printf("\n");
    }
    return 0;
}
