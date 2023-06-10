#include<stdio.h>
int main()
{
    // 1.for 
    // 2.while 
    // 3.do while 

    /*for loop syntax:
    
    for(initialization;condition;increment/decrement)
    {
        code 
    }
    initialization : to give variable a value like 
                    num=10
    
    */

    // for(;;) //infinite for loop
    // {
    //     printf("hello Aman Sir! \n");
    // } 

    int num,a;
    printf("enter the no. of times u want to print ur name : ");
    scanf("%d",&num);//let  num = 10

    for(a=3;a<=num;a++)
    {
        printf("%d.Hello aman Sir\n",a);
    }

    // decrement
    for(a=num;a>0;a--)// let num=10  
    {
        printf("%d. Hello Aman Sir\n",a);
    }
    return 0;
}
//h.w   print a table  like 2 4 8
