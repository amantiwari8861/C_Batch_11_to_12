// 8. Write a C program to find the largest of three numbers.

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three number =");
    scanf("%d%d%d",&a,&b,&c);
    printf("1st Number = %d , 2nd Number = %d , 3rd Number = %d\n",a,b,c);

    if ((a>b)&&(a>c))
    {
         printf("The 1st Number is the greatest among three ");
    }
    else
    {
        if ((b>a)&&(b>c))
        {
            printf("The 2nd Number is the greatest among three ");
        }
        else
        {
            printf("The 3rd Number is the greatest among three ");
        }
        
    }
    
    return 0;
}
