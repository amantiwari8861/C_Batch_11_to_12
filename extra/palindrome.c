#include<stdio.h>
int main()
{
    int num,rem,reverse=0,original;
    printf("enter num:");
    scanf("%d",&num);

    original=num;
    //124321
    while (num>0)
    {
        rem=num%10;
        printf("reverse %d*10 + rem %d \n",reverse,rem);
        reverse=reverse*10+rem;
        num=num/10;
    }
    printf("the reversed value is %d \n",reverse);
    
    if (original==reverse)
    {
        printf("palindrome no.");
    }
    else
    {
        printf("not palindrome");
    }
    
    

    return 0;
}
