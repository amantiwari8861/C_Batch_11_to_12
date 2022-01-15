#include <stdio.h>
#include <string.h>
void search(char a[10][20], char b[5][20])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (!strcmp(a[i], b[j]))
            {
                printf("%s is best in both \n", a[i]);
            }
        }
    }
}
int main()
{
    char a[10][20], b[5][20];
    printf("enter the name of top 10 performer in physics\n");
    for (int i = 0; i < 10; i++)
    {
        fflush(stdin);
        scanf("%[^\n]s", &a[i]);
        fflush(stdin);
    }
    printf("enter the name of top 5 performer in maths\n");
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%[^\n]s", &b[i]);
        fflush(stdin);
    }
    search(a, b);
    return 0;
}
