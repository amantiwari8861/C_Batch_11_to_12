#include <stdio.h>

int main()
{
    char ch;

    printf("Enter highest character = ");
    scanf("%c", &ch);

    for (int i = 'A'; i <= ch; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            if ((i >= 'C') && ((j >= 'B') && (j <= 'C')))
            {
                printf("*");
            }
            else
            {
                printf("%c", j);
            }
        }
        printf("\n");
    }

    return 0;
}
