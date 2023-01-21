#include<stdio.h>
int main()
{
    
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col <=row ; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

/*  psuedocode

step 1: row = 0
        0<5  True

        (i) col=0
            0<=row
            0<=0 True
            print *

        (ii) col=1
             col<=row
             1<=0 false
             inner loop terminate.

step 2: row = 1
        1<5 true

        (i) col=0
            0<=row
            0<=1 true
            print *

        (ii) col=1
        col<=row
        1<=1 true
        print *

        (iii) col=2
            2<=1 false 
            loop terminated.

step 3: row=2



*/