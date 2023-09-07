#include<stdio.h>
int main()
{
    int temp,sum=0;

    printf("enter 10 numbers :\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("enter %d no. : ",i);
        scanf("%d",&temp);

        sum=sum+temp;
    }
    
    printf("the sum of 10 no. is %d \n",sum);
    printf("the average of 10 no. is %f \n",sum/10.0);
    return 0;
}
