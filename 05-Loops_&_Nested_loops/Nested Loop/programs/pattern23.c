#include<stdio.h>

int main()
{
    int k=0,l=0,s=0;

    for (int i = 1; i <= 5; i++)
    {
        k=i;
        
        for (int j = 1; j <= 5; j++)
        {
            if (j%2==1)
            {
                printf("%2d ",k);
                k=k+10;
            }
            else
            {
                s=5*j-l;
                printf("%2d ",s);
            }
            
        }
        l++;
        printf("\n");
    }
    
    return 0;
}
