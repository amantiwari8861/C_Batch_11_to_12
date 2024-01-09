// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Prime factorization of %d: ", num);
//     for (int i = 2; i <= num; ++i)
//     {
//         int count = 0;
//         while (num % i == 0)
//         {
//             num /= i;
//             count++;
//         }
//         if (count > 0)
//         {
//             printf("%d", i);
//             if (count > 1)
//             {
//                 printf("^%d", count);
//             }
//             if (num > 1)
//             {
//                 printf(" * ");
//             }
//         }
//     }

//     printf("\n");
//     return 0;
// }

#include<stdio.h>
int main()
{
    int num,factor=0,power;
    printf("enter number:");
    scanf("%d",&num);

    for (int i = 2; i <= num; i++)
    {
        factor=i;power=0;
        while (num %i==0)
        {
            // printf(" %d%%%d ",num,i);// 72%2 
            // printf("%d X ",i);
            num=num/i;  
            power++;
        }
        if (power>0)
        {
            printf(" %d^%d ",factor,power);
            if (num > 1) 
            {   
                printf(" X");
            }
        }    
            
    }
    return 0;
}
