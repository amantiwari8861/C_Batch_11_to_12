#include<stdio.h>
int main()
{
    
    int t1=0,t2=1,t3;

    printf(" %d %d ",t1,t2);

    for(int i=1;i<=10;i++)
    {
        t3=t1+t2;
        printf(" %d ",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}
