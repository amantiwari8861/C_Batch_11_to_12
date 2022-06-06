#include<stdio.h>

int main()
{
    int num,i;
    printf("enter the number :");
    scanf("%d",&num);

    for (i = 1; i <= 20; i++)
    {
        printf(" %d X  %d is %d \n",num,i,num*i);
    }    
    /* H.W  1. take a number from user and find factorial of that
               let num=5  -> 5*4*3*2*1 = 120
            2. print fibonnaci series let n=10
                0 1 1 2 3 5 8 13 21 34 
            3. take a number from user and count how many digits are in that number eg.4589 -> 4
            4. take a number from user and count how many odd digits are in that number eg.4589 -> 3
            5. take a number from user and count how many even digits are in that number eg.4589 -> 2
            6. take a number from user and sum of the even digits in that number eg.4589 -> 12
            7. take a number from user and sum of the odd digits in that number eg.4589 -> 14
            8. take a ,n,d from user and print the A.P (arithematic progression)    
                let a=10  n=6 d=3
                a  a+d  a+2d a+3d a+4d  a+5d
                10  13  16 19 22 25 Ans.
            9. take a number from user and check whether it is a prime number or not 
            10. make a fibbonacci series from the sum of odd numbers and even numbers in a digit  
                and the number of term = digit length 
                let num=321578        OddSum=16 evenSum=10  digitLen=6
                16 10 26 36 62 98 Ans.
    */
    return 0;
}