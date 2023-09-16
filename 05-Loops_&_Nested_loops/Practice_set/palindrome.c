#include<stdio.h>
int main()
{
    // WOW or 12321 454 464
    int num,rev=0,rem,temp;
    printf("enter number:");
    scanf("%d",&num);

    temp=num;
    //reversing number
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("after reversing %d \n",rev); 
    if (rev==temp)
    {
        printf("%d is palindrome\n",temp);
    }
    else
    {
        printf("%d is not palindrome\n",temp);
    } 
    return 0;
}
/*
    psuedocode(dry run)
    step 1: let num=123,rev=0
            num>0 
            123>0 True
            rem=num%10
            rem=123%10
            rem=3
            rev=0*10+rem
            rev=3
            num=num/10
            num=123/10 -> 12.3 -> 12 

    step 2: num=12,rev=3
            12>0 True

            rem=12%10 => 2
            rev=3*10+2 => 32
            num= 12/10 => 1.2 => 1

    step 3: num=1,rev=32
            1>0 T

            rem=1%10 => 1
            rev=32*10+1 => 321
            num=1/10 => 0.1 => 0

    step 4: num=0,rev=321
            num>0
            0>0 false 
            loop terminated !!
*/