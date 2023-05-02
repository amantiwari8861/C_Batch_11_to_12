#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" \t j=%d ",j);
            if (j==2)
            {
                break;
            }
        }
        printf("\ni=%d\n",i);
    }
    // int num=5;

    // switch(num)
    // {
    //     case (num>3):printf("hello");
    //     break;
    // }

    return 0;
}
