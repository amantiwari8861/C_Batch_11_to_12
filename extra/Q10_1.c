#include<stdio.h>
int main()
{
    int num,len,evenSum,oddSum,rem;
    len=evenSum=oddSum=0;
    printf("enter the number:");
    scanf("%d",&num);

    int temp,temp2,temp3;
    temp=temp2=temp3=num;
    while (temp>0)
    {
        len++;
        rem=temp%10;
        if (rem%2==0)
            evenSum=evenSum+rem;
        else
            oddSum=oddSum+rem;
        temp=temp/10;
    }
    
    printf("the length is %d \n",len);
    printf(" odd sum=%d even sum=%d\n",oddSum,evenSum);
    
    printf("Fibonnaci Series : %d %d ",oddSum,evenSum);

    int t1=oddSum,t2=evenSum,t3;
    for (int i = 0; i < len-2; i++)
    {
        t3=t1+t2;
        printf(" %d ",t3);
        t1=t2;
        t2=t3;
    }
    
    return 0;
}
