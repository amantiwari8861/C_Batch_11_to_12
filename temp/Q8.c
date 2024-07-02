#include<stdio.h>
#include<math.h>
int main()
{
    int n=10,sum=0;
    for (int i = 1; i <= n*2; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nthe sum of %d odd no. is %d \n",n,sum);
    printf("%f",sqrt(625));

    return 0;
}
