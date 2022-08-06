#include<stdio.h>
int main()
{
    for (int i=3;i<10;i++)
    {
        printf("the value of i is %d before \n",i);
        if (i==6)
        {
            printf("going to break the loop \n");
            break;
        }
        printf("the value of i is %d after \n",i);
    }
    printf("after loop code \n");
    return 0;
}
