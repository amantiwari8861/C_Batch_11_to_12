#include<stdio.h>
int main()
{

    char name[100];
    int len;
    printf("enter the character length:");
    scanf("%d",&len); 
    fflush(stdin);
    // scanf("%d%*c",&len); 

    printf("enter the character :\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%c",&name[i]);
    }
    printf("the character is :");
    for (int i = 0; i < len; i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
