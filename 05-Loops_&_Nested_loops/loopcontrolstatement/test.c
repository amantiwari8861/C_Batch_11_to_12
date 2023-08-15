#include<stdio.h>
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        if (i==25)
        {
            break;
        }
        printf(" i= %d \n",i);        
    }
    
    return 0;
}
