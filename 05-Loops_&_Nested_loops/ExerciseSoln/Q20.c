// 10. make a fibbonacci series from the sum of odd numbers and even numbers in a digit  
//                 and the number of term = digit length 
//                 let num=321578        OddSum=16 evenSum=10  digitLen=6
//                 16 10 26 36 62 98 Ans.

#include<stdio.h>
int main()
{
    int num,digLen,eSum,oSum;
    digLen=eSum=oSum=0;
    printf("enter the number :");
    scanf("%d",&num);

    int temp=num;
    // while (temp>0)
    // {
    //     digLen++;
    //     temp/=10;
    // }
    // printf("digit Length is :%d \n",digLen);
    
    // while (num>0)
    // {
    //     int rem=num%10;
    //     if (rem%2==0)
    //     {
    //         eSum=eSum+rem;
    //     }
    //     else
    //     {
    //         oSum+=rem;
    //     }
    //     num/=10;
    // }
    // printf("even Sum=%d Odd Sum=%d \n",eSum,oSum);
    // int t1,t2,t3;
    // t1=eSum;t2=oSum;
    // printf("the Series is :%d %d ",eSum,oSum);
    // for (int i = 3; i <= digLen; i++)
    // {
    //     t3=t1+t2;
    //     printf("%d ",t3);
    //     t1=t2;
    //     t2=t3;
    // }

    while (temp>0)
    {
        int rem=temp%10;
        if(rem%2==0)
        {
            eSum+=rem;
        }
        else
        {
            oSum+=rem;
        }
        digLen++;
        temp/=10;
    }
    printf("even Sum=%d Odd Sum=%d \n",eSum,oSum);
    int t1,t2,t3;
    t1=eSum;t2=oSum;
    printf("the Series is :%d %d ",eSum,oSum);
    for (int i = 3; i <= digLen; i++)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
    }



    return 0;
}
