#include<stdio.h>
int main()
{
    int num,isPrime=1;
    printf("enter the number:");
    scanf("%d",&num);

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            // printf(" %d %d se kat gaya\n",num,i);
            printf("%d is not a prime no.\n",num);
            isPrime=0;
            break;
        }
        // else
        // {
            // printf("%d is a prime no.\n",num);
        //    printf(" %d %d se nahi kata \n",num,i); 
        // }        
    }
    if (isPrime==1)
    {
        printf("%d is a prime no.\n",num);
    }
    
    
    return 0;
}
