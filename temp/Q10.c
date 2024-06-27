#include<stdio.h>
int main()
{
    int num,power,res=1;
    printf("enter number and it's power:\n");
    scanf("%d%d",&num,&power);// 2 7

    for(int i=1;i<=power;i++)
    {
        res=res*num;
    }

    printf("the result is %d \n",res);
    return 0;
}

// 10.Take a number from user and it's power then find out the value after power.
// Test Data:
// 2
// 5
// Expected Output:
// the result of 2^5 is 32.