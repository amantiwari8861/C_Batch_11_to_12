#include<stdio.h>
int main()
{
    int t1=0,t2=1,t3,term;
    printf("enter no. of terms:");
    scanf("%d",&term);

    printf(" %d %d ",t1,t2);

    for (int i = 0; i < term-2; i++)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}
