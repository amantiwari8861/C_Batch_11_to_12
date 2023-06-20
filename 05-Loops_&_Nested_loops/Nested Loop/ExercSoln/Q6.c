#include<stdio.h>
int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for(int j=6-i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    


    return 0;
}
