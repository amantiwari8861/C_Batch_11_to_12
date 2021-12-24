#include<stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==0 && j>=0)
            {
                printf("* ");
            }
            else
            {
                if (i==1 && (j>=0 && j<2))
                {
                    printf("*");

                    if (i==1 && (j>1 && j<5))
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf("");
                    }
                    
                }
                else
                {
                    if ()
                    {
                        /* code */
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}
