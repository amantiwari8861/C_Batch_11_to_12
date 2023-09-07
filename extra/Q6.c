#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the value of m:");
    scanf("%d",&m);
    if (m>0)
    {
        n=1;
    }
    else if (m<0)
    {
        n=-1;
    }
    else
    {
        n=0;
    }
    printf("n=%d",n);
    return 0;
}
