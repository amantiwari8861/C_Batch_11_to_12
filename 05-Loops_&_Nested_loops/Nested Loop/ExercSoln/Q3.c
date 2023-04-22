#include<stdio.h>
int main()
{
    int row;
	printf("Enter row:");
	scanf("%d",&row);//let row = 5

    for (int i = 0; i < row; i++)
    {
        for (int space = row-1; space >i; space--)
        {
            printf("@");
        }
        printf("\n");        
    }
    
    /*      Psuedocode (Dry Run)
    
    Step 1: i=0,row=5
            0<5 True

            (a) space=4 
                4>0 T
                print @ 

            (b) space=3
                3>0 T
                print @ 
            
            (c) space=2
                2>0 T
                print @ 
            
            (d) space=1
                1>0 T
                print @ 
            
            (e) space=0
                0>0 false inner loop terminated
        print \n 

    Step 2: i=1,row=5
            1<5 T

            (a) space=4 
                4>1 T
                print @ 

            (b) space=3
                3>1 T
                print @ 
            
            (c) space=2
                2>1 T
                print @ 

            (e) space=1
                1>1 false inner loop terminated
        print \n 
                    
    
    */



    return 0;
}
