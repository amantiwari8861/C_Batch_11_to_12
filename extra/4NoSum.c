#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,sum;
    printf("enter num1 :");
    scanf("%d",&num1);
    printf("enter num2 :");
    scanf("%d",&num2);
    printf("enter num3 :");
    scanf("%d",&num3);
    printf("enter num4 :");
    scanf("%d",&num4);

    printf("enter 4 no's :\n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum=num1+num2+num3+num4;
    printf(" sum ki value %d  aahay",sum);
    return 0;
}
