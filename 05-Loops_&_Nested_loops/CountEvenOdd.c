#include<stdio.h>
int main()
{
    int num,evenCount,sumOfEven=0;
    printf("enter the number : ");
    scanf("%d",&num);

    for(evenCount=0;num >0; num=num/10)
    {   
        int rem=num%10;
        if (rem%2 == 0)     
        {
            evenCount++;
            sumOfEven = sumOfEven+rem;
        }
    }

    printf(" sum of even digit :%d ",sumOfEven);
    printf(" total digit :%d ",evenCount);
    return 0;
}