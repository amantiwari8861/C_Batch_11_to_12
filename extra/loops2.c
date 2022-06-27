#include<stdio.h>
int main()
{
    
    int sum=0,i;
    
    for (i = 1; i <= 10; i++)
    {
        printf(" %d ",i);
        sum = sum+ i;
    }
    printf(" \n sum = %d ",sum);

    /*
            psuedocode
        
    step 1: i=1,sum=0
    1 <= 10 true
    sum= sum + i
    sum = 0 + 1
    sum =1

    step 2: i=2, sum =1
    2 <= 10 t
    sum = 1+2 => 3

    step 3: sum=3,i=3
    3 <= 10 t
    sum= 3+3 =>6

    step 4: sum=6,i=4
    4 <= 10 t
    sum=10

    step 5: sum=10 ,i=5
    5 <= 10 t
            sum=15

            ...

    step 10: sum=45,i=10
    10 <= 10  t
        sum=45 +10 => 55

    step 11: i=11,sum=55
            11 <= 10 False 
            loop terminate.






    */
    return 0;
}
