#include<stdio.h>
int main()
{
    int terms,i,count=0;
    printf("enter odd count :");
    scanf("%d",&terms);//10

    for(i=1;count != terms;i++)
    {
        if (i%2 != 0)
        {
            printf(" %d  ",i);
            count++;
        }
        
    }
    return 0;
}
