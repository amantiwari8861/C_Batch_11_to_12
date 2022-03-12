#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the value of a and b : ");
    scanf("%d%d",&a,&b);

    printf("before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("the value of a is %d and b is %d \n",a,b);

    return 0;
}
