#include<stdio.h>
int main()
{
    int num,rem,result,temp;
    printf("enter the number :");
    scanf("%d",&num);

    temp=num;
    while (num>0)
    {
        rem=num%10;
        result=result+rem*rem*rem;
        num=num/10;
    }
    
    if (temp==result)
    {
        printf("%d is armstrong no.",temp);
    }
    else
    {
        printf("%d is not an armstrong no.",temp);
    } 


    return 0;
}
