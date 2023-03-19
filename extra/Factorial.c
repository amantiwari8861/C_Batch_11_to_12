#include<stdio.h>

int main()
{
    int num,result=1;
    printf("enter the number :");
    scanf("%d",&num);

    // for(int i=num;i>0;i--)
    // {
    //     result=result*i;
    // }

    for(int j=1;j<=num;++j)
    {
        result*=j;
    }


    printf("the result is %d \n",result);


    return 0;
}