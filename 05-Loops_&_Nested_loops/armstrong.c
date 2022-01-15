#include<stdio.h>
int main()
{
    // 153  =>  3*3*3 + 5*5*5 + 1*1*1 => 153
    int num,rem,sum=0;
    printf("enter the number : ");
    scanf("%d",&num);
    int original=num;
    while (num>0)
    {
        rem = num%10 ; 
        sum = sum + rem*rem*rem;
        num=num/10 ;
    }
    if (sum == original)
    {
        printf("this is a armstrong no. \n");
    }
    else
    {
        printf("this is not a armstrong no. \n");
    }
    
    return 0;
}

//h.w make psuedocode of this armstrong no. 