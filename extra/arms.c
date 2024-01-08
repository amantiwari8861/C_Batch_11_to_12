#include<stdio.h>
int main()
{
    int num,rem,result=0,temp;
    printf("enter number:");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        rem=num%10;
        if (rem%2!=0)
        {
            printf("odd");
        }
        
        result=result+rem*rem*rem;
        num=num/10;
    }
    // printf("num =%d \n",num);
    // printf("result =%d \n",result);
    if (temp==result)
    {
        printf("armstrong no");
    }
    else
    {
        printf("not armstrong no");
    }
    return 0;
}
