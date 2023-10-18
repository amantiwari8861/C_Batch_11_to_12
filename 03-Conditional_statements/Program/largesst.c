#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 no.s \n");
    scanf("%d%d%d",&num1,&num2,&num3);// 10 5 30

    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is largest \n",num1);   
        }
        else
        {
            printf("%d is largest\n",num3);
        }
        
    }
    else if (num2>num3)
    {
        printf("%d is largest \n",num2);
    }
    else
    {
        printf("%d is largest \n",num3);
    }
    
    
    

    return 0;
}
