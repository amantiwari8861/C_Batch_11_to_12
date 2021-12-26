#include<stdio.h>

int main()
{
    int n,a,sum = 0, temp;

    printf("Enter a number = ");
    scanf("%d",&n);

    temp=n;

    for (;n>0; n=n/10)
    {
        a = n%10;
        sum = sum+a*a*a;
    }
    if (temp == sum)
    {
        printf("%d is an Armstrong number",temp);
    }
    else
    {
    printf("%d is not an Armstrong number",temp);
    }
    return 0;
}
