#include <stdio.h>

void series(int);
int main()
{
    int n, num;
    
    printf("Enter last term number = ");
    scanf("%d", &n);

    series(n);
    return 0;
}
void series(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", i);
    }
}