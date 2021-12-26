#include<stdio.h>

int main()
{
    int sum =0, times,num;
    printf("Enter the Nth term : ");
    scanf("%d",&times);

    for (int i = 0; i < times; i++)
    {
        printf("Enter the %dth term : \n",i);
        scanf("%d",&num);

        sum = sum+num;
    }
        printf("The sum : %d",sum); 
    return 0;
}
