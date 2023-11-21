#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number :");
    scanf("%d",&num);

    while (num>0)
    {
        count++;
        num=num/10;
    }
    printf("the digit length is %d \n",count);
    
    return 0;
}
