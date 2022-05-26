#include<stdio.h>
int main()
{
    float n,i,rsum=0,r,temp;
    printf("enter the no. of Resistance :");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        printf("enter the resistance %0.0f :",i);
        scanf("%f",&r);
        rsum=rsum+r;
    }
    printf("the sum of resistance is %.2f",rsum);
    
    return 0;
}
