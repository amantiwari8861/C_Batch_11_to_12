#include<stdio.h>

int main()
{
    int num,remainder,reverse;

    printf("Enter the any number = ");
    scanf("%d",&num);

    while (num>0)
    {
        remainder=num%10;
        reverse= reverse*10+remainder;
        num= num/10;
    }
    printf("reverse = %d",reverse);
    

    return 0;
}
