#include<stdio.h>
int main()
{
    //10 => 1+2+3+......+10 = 55
    int sum=0,i;
    
    for ( i = 1; i <= 10; i++)
    {
       sum=sum+i; 
    }
    printf("the sum till %d is %d \n",10,sum);
    return 0;
}

/*
    psuedocode/dryrun ( defines how it is working internally )

    step 1: let num=10,sum=0
            i=1
            i<=num   1<=10 true
            sum=sum+i;   => sum=0+1 => sum=1
    step 2 : i=2
            2<=10 t
            sum=1+2 =3
    step 3: i=3
            3<=10 t
            sum=3+3 => 6
    step 4: i=4
            4<=10 t
            sum=6+4 => 10
    step 5: i=5
            5<=10 t
            sum=10+5 => 15
    step 6: i=6
            6<=10 t
            sum=15+6 => 21
    step 7: i=7
            7<=10 t
            sum=7+21 => 28
    step 8: i=8
            8<=10 t
            sum=28+8 => 36
    step 9: i=9
            9<=10 t
            sum=36+9 => 45
    step 10: i=10
            10<=10 t
            sum=45+10 => 55
    step 11: i=11
            11<=10 false
            loop terminated.
*/