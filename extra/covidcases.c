#include<stdio.h>
int main()
{
    // char ownerName[]={'A','M','A','N'};
    // char ownerName[]={"Aman"};
    // char ownerName[10];
    // printf("%c",ownerName[0]);
    // printf("%c",ownerName[1]);
    // printf("%c",ownerName[2]);
    // printf("%c",ownerName[3]);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",ownerName[i]);
    // }
    // printf("enter owner name :");
    // for (int i = 0; i < 4; i++)
    // {
    //     scanf("%c",&ownerName[i]);
    //     fflush(stdin);
    // }
    // scanf("%[^\n]s",&ownerName);
    // printf("The owner name is :");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",ownerName[i]);
    // }
    // printf("%s",ownerName);

    char countries[2][20];

    for (int i = 0; i < 2; i++)
    {
        printf("enter %dth country name:",i);
        scanf("%[^\n]s",&countries[i]);
        fflush(stdin);
    }
    printf("The countries name are :");
    for (int i = 0; i < 2; i++)
    {
        printf("%s,",countries[i]);
    }
    return 0;
}
