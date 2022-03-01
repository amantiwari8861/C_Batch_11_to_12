#include<stdio.h>
void main()
{
    for (int i=3;i<10;i++)
    {
        printf("the value of i is %d before \n",i);
        if (i==6)
        {
            printf("going to skip label\n");
            goto aman;
        }
        printf("the value of i is %d after \n",i);
    }
    printf("after loop code \n");
    aman:
    printf("after skip code \n");
}
