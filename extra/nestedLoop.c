#include<stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("working task %d \n",i);
        for (int j = 1; j <= 2; j++)
        {
            printf("performing subtask %d \n",j);
        }
    }
    
    
    return 0;
}
