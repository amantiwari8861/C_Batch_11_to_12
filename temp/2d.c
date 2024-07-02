#include<stdio.h>
int main()
{
    // char name='A';
    // printf("%c",name);
    // char name[20]={'a','m','a','n'};
    // char name[20]={"aman"};

    // printf("%c",name[0]);
    // printf("%c",name[1]);
    // printf("%c",name[2]);
    // printf("%c",name[3]);

    // countries -> 3 -> int countries[3];
    // 3 country -> 2 state
    // int states[3][2];
    char countryName[3][20]={"india","america","australia"};
    char stateName[3][2][20]={
        {"delhi","mumbai"},
        {"new york","san francisco"},
        {"sydney","south wales"}
    };
    int covidCases[3][2];

    for (int i = 0; i < 3; i++)
    {
        printf("enter %s data :\n",countryName[i]);
        for (int j = 0; j < 2; j++)
        {
            printf("\tenter %s data: ",stateName[i][j]);
            scanf("%d",&covidCases[i][j]);
        }
    }
    printf("all countries covid cases :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d",covidCases[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
