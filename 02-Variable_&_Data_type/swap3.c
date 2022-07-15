#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b : \n");
    scanf("%d%d",&a,&b);

    printf("before swapping a=%d and b=%d\n",a,b);
    c=a;//in equalto(=) assignments always happens from right to left 
    a=b;
    b=c;

    printf("the value of a is %d and b is %d \n",a,b);

    return 0;
}