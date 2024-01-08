#include<stdio.h>
int main()
{
    for (int i=1;i<=10;i++)
    {
        printf("the value of i is %d before \n",i);
        if (i%2==0)
        {
            // break;
            continue;
        }
        printf("the value of i is %d after \n",i);
    }
    printf("after loop code \n");
    printf("after loop code \n");
    printf("after loop code \n");
    return 0;
}