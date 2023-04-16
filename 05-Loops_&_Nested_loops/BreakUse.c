#include<stdio.h>

int main()
{
    int num;

    do
    {
        printf("enter the value of num :");
        scanf("%d",&num);

        if(num>100)
        {
            break;
        }
        printf("the value of num2 is %d \n",num);

    } while (1);
    
    return 0;
}
