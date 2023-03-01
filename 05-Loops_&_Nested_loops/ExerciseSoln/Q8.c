#include<stdio.h>
int main()
{
    int terms,i,count=0,sum=0;
    printf("enter odd count :");
    scanf("%d",&terms);//10

    // for(i=1;count != terms;i++)
    // {
    //     if (i%2 != 0)
    //     {
    //         printf(" %d  ",i);
    //         count++;
    //     }
    // }

    for ( i = 1; i < terms*2; i++)
    {
        if (i%2 !=0)
        {
            printf(" %d ",i);
            sum+=i;
        }
    }
    printf("\nthe sum of %d odd no. is %d \n",terms,sum);
    return 0;
}
