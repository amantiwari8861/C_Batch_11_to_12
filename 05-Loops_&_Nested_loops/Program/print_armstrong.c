#include <stdio.h>

int main()
{
    int n, a, sum = 0;

    printf("Enter the n term = ");
    scanf("%d", &n);

    printf("The all armstrong form 0 to %d is = ", n);

    for (int i = 0; i <= n; i++)
    {
        if (i>=10)
        {
            a = i % 10;
            sum = sum + a * a * a;
        }
        else
        {
            sum 
        }
        
        
    }

    return 0;
}
