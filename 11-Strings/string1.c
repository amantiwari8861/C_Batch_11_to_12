#include<stdio.h>

int main()
{
    char name[10];
    printf("enter ur name \n");

    for (int i = 0; i < 8; i++)
    {
        scanf("%c",&name[i]);
        fflush(stdin);
    }
    printf("-------------------------------\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%c",name[i]);
    }
    

    return 0;
}
