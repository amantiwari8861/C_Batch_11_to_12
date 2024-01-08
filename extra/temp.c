#include<stdio.h>
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);

    //case 1: num=16   
    /*
        num%2 == 0  
        num%3 == 0
        num%4 == 0
        num%5 == 0
        ...........
        num%15 == 0
    */
//    int haveFactors=0;
//    for (int i = 2; i <= num-1; i++)
//    {
//         if (num%i==0)
//         {
//             haveFactors=1;
//             printf(" %d kat gaya %d se \n",num,i);
//             break;
//         }
//         else
//         {
//             printf(" %d nahi kata %d se \n",num,i);
//         }        
//    }

//     if (haveFactors==1)
//     {
//         printf("%d is not a prime no. \n",num);
//     }
//     else
//     {
//         printf("%d is a prime no. \n",num);
//     }

    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf(" %d \n",i);
    }
    


    return 0;
}
