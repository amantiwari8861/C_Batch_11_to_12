#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);

    if (marks == 100)
    {
        printf(" u got scholarship of 1 lac. \n");
    }
    else if (marks > 90)
    {
        printf(" u got admission in DU \n");
    }
    else if (marks > 80)
    {
        printf(" u got admission in ccs \n");
    }
    else
    {
        printf("chai becho \n");
    }

    return 0;
}
