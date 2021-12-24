#include <stdio.h>

int main()
{
    char ch, temp;

    printf("Enter highest character = ");
    scanf("%c", &ch);

    temp = 'A';
    for (int i = 'A'; i <= ch; i++)
    {

        for (int j = 'A'; j <= i; j++)
        {
            printf("%c ", temp);
        }
        printf("\n");
        temp++;
    }

    return 0;
}
