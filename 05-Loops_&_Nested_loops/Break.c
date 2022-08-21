#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    
    for (int i=3;i<10;i++)
    {
        printf("the value of i is %d before \n",i);
        if (i==num)
        {
            printf("going to break the loop \n");
            break;
        }
        printf("the value of i is %d after \n",i);
    }
    printf("after loop code \n");
    return 0;
}
