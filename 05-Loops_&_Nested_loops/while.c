#include<stdio.h>
int main()
{
    // // initialization ,condition , inc/dec
    // int num=1;
    // // while (1) //infinite while loop
    // while(num<=10)
    // {
    //     printf("%d \n",num);
    //     num++;
    // }

    int term;
    printf("enter term :");
    scanf("%d",&term);//let term=10

    
    int i;
    for ( i = term; i > 0; i--)
    {
        printf(" %d ",i);
    }

    while (term>0)
    {
        printf(" %d ",term);
        term--;
    }
    
    return 0;
}


//1-100
//100 - 1
// print you name 25 time
// table printing 
// armstrong , reverse 
//do with all type of loops

// 153 => 1 * 1 * 1 + 5*5*5 + 3*3*3  => 27 + 125 + 1 => 153  armstrong no.
//153 => 351
// 351 = 1*1*1+ 5*5*5+3*3*3 => 153   not a armstrong no.