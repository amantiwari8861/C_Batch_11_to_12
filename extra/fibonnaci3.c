#include<stdio.h>
int main()
{
    unsigned long long int t1=0,t2=1,t3,term;
    printf("enter terms :");
    scanf("%llu",&term);
    // printf("Size of unsigned long long int: %lu bytes\n", sizeof(unsigned long long int));

    if(term>=2)
    {
        printf("Fibonnaci Series :%llu %llu ",t1,t2);
        for (int i = 0; i < term-2; i++)
        {
            t3=t1+t2;
            printf(" %llu",t3);
            t1=t2;
            t2=t3;
        }
    }
    

    return 0;
}
