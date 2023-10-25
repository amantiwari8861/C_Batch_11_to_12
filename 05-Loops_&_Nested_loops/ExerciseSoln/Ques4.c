#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter 10 no's \n");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d",&num);
        sum=sum+num;
        // printf(" num = %d \n",num);
    }
    printf("Sum = %d \n",sum);
    return 0;
}
