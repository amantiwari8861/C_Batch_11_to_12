#include<stdio.h>
int main()
{

    int num,sum=0;
    float avg;
    
    for (int i = 1; i <= 10; i++)
    {
        printf(" enter %d number :",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    avg=sum/10.0;
    printf("the sum is %d \n",sum);
    printf("the average is %f ",avg);

    return 0;
}
