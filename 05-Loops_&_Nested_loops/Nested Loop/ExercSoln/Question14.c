#include<stdio.h>
int main()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int space = 4; space >i; space--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d",j+1);
        }
        for(int k=0;k<i;k++)
        {
            printf("%d",i-k);
        }
        printf("\n");
    }
    


    return 0;
}
