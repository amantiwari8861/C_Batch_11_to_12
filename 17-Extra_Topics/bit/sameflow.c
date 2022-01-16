#include<stdio.h>
#include<math.h>
int main()
{
    int num,ans=0,i=0;
    printf("enter the number :\n");
    scanf("%d",&num);

    while (num!=0)
    {
        int digit=num&1;
        ans=(ans*10)+digit; //same flow
        // ans=(digit*pow(10,i))+ans;//reverse flow
        i++;
        num=num>>1;
    }

    printf("result : %d \n",ans);
    
    //h.w binary of -10


    return 0;
}
