#include<stdio.h>

int main()
{
    int num;
    printf(" enter table :");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        int temp=num*i;
        printf(" %d \n",temp);
    }
    
    return 0;
}
