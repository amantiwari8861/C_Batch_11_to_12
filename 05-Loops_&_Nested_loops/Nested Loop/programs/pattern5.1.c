#include <stdio.h>

int main()
{
    int num;

    printf("Enter highest number = ");
    scanf("%d", &num);
    
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
