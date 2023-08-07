#include<stdio.h>
int main()
{
    int num,len=0,tempnum1,rem,evenSum=0,oddSum=0,term3;
    printf("enter the number :");
    scanf("%d",&num);//321578
    
    tempnum1=num;
    while (num>0)
    {
        len++;
        num=num/10;
    }
    printf("Length :%d\n",len);

    while (tempnum1>0)
    {
        rem=tempnum1%10;
        if (rem%2==0)
        {
            evenSum=evenSum+rem;
        }
        else
        {
            oddSum=oddSum+rem;
        }
        tempnum1=tempnum1/10;
    }
    printf("Odd Sum : %d and Even Sum :%d \n",oddSum,evenSum);    

    printf("Fibonnaci Series : %d %d ",oddSum,evenSum);
    int  term1,term2;
    term1=oddSum;
    term2=evenSum;
    for (int i = 0; i < len-2; i++)
    {
        term3=term1+term2;
        printf(" %d",term3);
        term1=term2;
        term2=term3;
    }
    

    return 0;
}
