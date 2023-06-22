#include<stdio.h>
int main()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int space = 4; space > i; space--)
        {
            printf(" ");
        }
        for (int star = 0; star <=i; star++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    return 0;
}
