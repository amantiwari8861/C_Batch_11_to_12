#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no.\n");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        if (b>c)
        {
            printf("%d is largest\n",a);
        }   
    }
    else if (b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
    
    


    return 0;
}
