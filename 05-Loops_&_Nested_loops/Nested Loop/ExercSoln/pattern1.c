#include<stdio.h>
#include<windows.h>
int main()
{
    
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col <8 ; col++)
        {
            printf("*");
            Sleep(500);
        }
        printf("\n");
    }
    
    return 0;
}

/*  psuedocode

step 1: row = 0
        0<5  True

        (i) col=0
            0<8
            print *

        (ii) col=1
             1<8 true
            print *
        (iii) col=2
             2<8 true
            print *
        (iv) col=3
             3<8 true
            print *
        (v) col=4
             4<8 true
            print *
        (vi) col=5
             5<8 true
            print *
        (vi) col=6
             6<8 true
            print *
        (vi) col=7
             7<8 true
            print *
        (vi) col=8
             8<8 false
            inner loop terminated
   


step 2: row = 1
        1<5 true
        (i) col=0
            0<8
            print *

        (ii) col=1
             1<8 true
            print *
        (iii) col=2
             2<8 true
            print *
        (iv) col=3
             3<8 true
            print *
        (v) col=4
             4<8 true
            print *
        (vi) col=5
             5<8 true
            print *
        (vi) col=6
             6<8 true
            print *
        (vi) col=7
             7<8 true
            print *
        (vi) col=8
             8<8 false
            inner loop terminated       

step 3: row=2



*/