#include<stdio.h>
int main()
{
    float num,pwr,result=1;
    printf("enter number and it's power\n");
    scanf("%f%f",&num,&pwr);//2 7

    for (int i = 1; i <= pwr; i++)// 2*2*2*.....
    {
        // printf("%f * %f = ",num,result);
        result=num*result;
        // printf("%f\n",result);
    }

    printf("the result is %0.2f \n",result);
    return 0;
}