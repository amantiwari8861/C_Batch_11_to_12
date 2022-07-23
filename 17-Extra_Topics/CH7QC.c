#include <stdio.h>
int main()
{
    int failedsub, class;
    printf("which class(division) u got ? :");
    scanf("%d", &class);
    printf("how many failed subjects ? :");
    scanf("%d", &failedsub);

    if (class == 1)
    {
        if (failedsub > 3)
            printf("u didn't got any grace !\n");
        else
            printf("u got 5 marks \n");
    }
    else if (class == 2)
    {
        if (failedsub > 2)
        {
            printf("u didn't got any grace !\n");
        }
        else
        {
            printf("u got 4 marks \n");
        }
    }
    else if (class == 3)
    {
        if (failedsub > 1)
        {
            printf("u didn't got any grace !\n");
        }
        else
        {
            printf("u got 5 marks \n");
        }
    }
    else
    {
        printf("invalid class !\n");
    }

    return 0;
}
