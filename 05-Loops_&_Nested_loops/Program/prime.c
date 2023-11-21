#include<stdio.h>
int main()
{
    // A prime number is a positive integer that is divisible only by 1 and itself. 
    // For example: 2, 3, 5, 7, 11, 13, 17 
    int num,isPrime=1;
   printf("enter the no. \n");
   scanf("%d",&num);

   for (int i = 2; i < num; i++)
   {
        if (num%i==0)
        {
            printf("%d IS NOT A PRIME NO. bcz ye kat gaya %d se \n",num,i);
            isPrime=0;
            break;
        }        
    }
    if (isPrime==1)
    {
        printf("%d is a prime no.",num);
    }
    return 0;
}
