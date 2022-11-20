#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the value of m :");
    scanf("%d",&m);

    if (m>0)
    {
        n=1;
        printf(" n =%d \n",n);
    }
    if (m==0)
    {
        n=0;
        printf(" n =%d \n",n);
    }
    if(m<0)
    {
        n=-1;
        printf(" n =%d \n",n);
    }
    
    
    

    return 0;
}
