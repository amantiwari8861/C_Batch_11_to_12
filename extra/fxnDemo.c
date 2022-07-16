#include<stdio.h>
int isArmstrong(int);
int isPalindrome(int);
int reverse(int);
int main()
{
    int num;
    printf("enter number :");
    scanf("%d",&num);

    isArmstrong(num);
    return 0;
}
int isArmstrong(int num)
{
    int rem,sum=0;
    int original=num;
    while (num>0)
    {
        rem = num%10 ; 
        sum = sum + rem*rem*rem;
        num=num/10 ;
    }
    if (sum == original)
    {
        printf(" %d is armstrong \n",original);
    }
    else
    {
        printf(" %d is not an armstrong \n",original);
    }
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
    printf("the reverse is %d \n",rev);
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
