#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter the number to be factorial :");
    scanf("%d",&num);//5
    // 5 * 4 * 3 * 2 * 1 = 120 ans.
    for (int i=num;i>0;i--)
    {
        fact=fact*i;
    }

    // 5 * 4 * 3 * 2 * 1 = 120 ans.
    
  /*   for (int i=1;i<=num;i++)
    {
        fact=fact*i;
    } */
    printf("the factorial of %d is %d \n",num,fact);
    return 0;
}

/* psuedocode/dryrun ( defines how it is working internally )

step 1: let num=5
        fact=1
        i=1
        i<=num   1<=5 true
        fact=fact*i;   => fact=1*1 => fact=1

step 2: i=2
        2<=5 t
        fact=1*2 => 2





*/

