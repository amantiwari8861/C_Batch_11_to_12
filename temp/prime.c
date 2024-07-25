// #include<stdio.h>
// int main()
// {
//     int num,count=0;
//     printf("enter no. :");
//     scanf("%d",&num);

//     for (int i = 1; i <= num; i++)
//     {
//         if (num%i==0)
//         {
//             // printf("%d %d se kat gaya \n",num,i);
//             count++;
//         }
//     }
//     if (count>2)
//     {
//         printf("%d is not a prime no. \n",num);
//     }
//     else
//     {
//         printf("%d is a prime no. \n",num);
//     }
    
    

//     return 0;
// }   
#include<stdio.h>
int main()
{
    int num,isPrime=1;
    printf("enter no. :");
    scanf("%d",&num);

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            // printf("%d %d se kat gaya \n",num,i);
            printf("%d is not a prime no. \n",num);
            isPrime=0;
            break;
        }
        // else
        // {
            // printf("%d %d se nahi kata\n",num,i);
            // printf("%d is a prime no. \n",num);

        // }
    }

    if (isPrime==1)
    {
        printf("%d is a prime no. \n",num);
    }
    

    return 0;
}   