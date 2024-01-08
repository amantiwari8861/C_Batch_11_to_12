#include<stdio.h>
int main()
{
    int num,p,i,result=1;
    printf("enter number and power\n");
    scanf("%d%d",&num,&p);

    // num=2 , p=7
    //result = 2*2*2
    // loop

    for(i=1;i<=p;i++)
    {
        result=result*num;
    }

    //step 1: result=1*2=2
    //step 2: result=2*2=4
    //step 3: result=4*2=8
    //step 4: result=8*2=16
    // .        .
    //step 7: result=64*2=128

    printf("the result is %d \n",result);

    return 0;
}
