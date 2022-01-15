#include<stdio.h>

int main()
{
    for (int i = 'E'; i >= 'A'; i--)
    {
       for (int j = 0; j < 5; j++)
       {
           printf("%c ",i);
       }
       printf("\n");
    }
    
    return 0;
}
