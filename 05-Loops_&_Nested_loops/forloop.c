#include<stdio.h>
int main()
{
    /*for loop syntax:
    for(initialization;condition;increment/decrement)
    {
        code 
    }
    */
    int num,a;
    printf("enter the no. of times u want to print ur name : ");
    scanf("%d",&num);//10

    // for(a=3;a<=num;a++)
    // {
    //     printf("%d .my name is aman\n",a);
    // }
    //decrement
    for(a=num;a>0;a--)// let num=10  
    {
        printf("%d .my name is aman\n",a);
    }
    return 0;
}
//h.w   print a table  like 2 x 1 = 2 