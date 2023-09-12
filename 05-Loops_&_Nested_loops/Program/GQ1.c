#include<stdio.h>
int main()
{
    int num,result=1;
    printf("enter the number :");
    scanf("%d",&num);

    if (num<0)
    {
        printf("invalid no.\n");
    }
    else if (num==0 || num==1)
    {
        printf("the result is 1\n");
    }
    else
    {
        for (int i = num; i > 0; i--)
        {
            result=result*i;
        }
        printf("the result is %d \n",result);
    }
    return 0;
}