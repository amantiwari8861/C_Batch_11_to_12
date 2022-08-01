#include<stdio.h>
int main()
{
    // A prime number is a positive integer that is divisible only by 1 and itself. 
    // For example: 2, 3, 5, 7, 11, 13, 17 
    int num,temp=0;
   printf("enter the no. \n");
   scanf("%d",&num);

   for (int i = 2; i < num; i++)
   {
        if (num%i==0)
        {
           temp=1;
           break;
        }
    }
    if (temp==1)
    {
        printf("THIS IS NOT A PRIME NO.");
    }
    else
    {
        printf("this is a prime no.");
    }
    return 0;
}
