#include<stdio.h>
int isPalindrome(int);
int reverse(int);
int main()
{
    int num;
    printf("enter number :");
    scanf("%d",&num);
    printf("the reverse is %d \n",reverse(num));
    isPalindrome(num);    
    return 0;
}

int reverse(int num)
{
    int rem,rev=0;
    int original=num;
    while (num>0)
    {
        rem = num%10 ; 
        rev = rev*10 + rem;
        num=num/10 ;
    }
    // printf("the reverse is %d \n",rev);
    return rev;
}
int isPalindrome(int num)
{
    int rev=reverse(num);
    if (num==rev)
    {
        printf("palindrome !\n");
    }
    else
    {
        printf("not palindrome !");
    }
}
