#include<stdio.h>
int main()
{
    
    // for (int i = 65; i <= 90; i++)
    // {
    //     printf(" %c  ",i);
    // }
    
    // 3 4 => 3*3*3*3
    int num,power,result=1;
    printf("enter no & power :");
    scanf("%d%d",&num,&power);

    for (int i = 0; i < power; i++)
    {
        result=result*num;
    }
    printf("the result is %d ",result);


    return 0;
}
