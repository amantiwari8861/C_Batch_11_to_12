#include<stdio.h>
int main()
{
    int term1=0,term2=1,term3,ntimes;
    printf("enter the number :");
    scanf("%d",&ntimes);//10
    // 0 1 1 2 3 5 8 13 21 34
    printf("the series is :  %d %d ",term1,term2);
    for (int i = 0; i < ntimes-2; i++)
    {
        term3=term1+term2;
        printf(" %d ",term3);
        term1=term2;
        term2=term3;
    }
   /*               psuedocode
   step 1: i=0  term1=0  term2=1 let ntimes=10
            i<ntimes   1<8 t
            term3=term1+term2;  0+1 -> 1
            term1=term2;  term1 = 1
            term2=term3;  term2= 1

   step 2: i=1  term1=1  term2=1
            i<ntimes   1<8 t
            term3=term1+term2;  1+1 -> 2
            term1=term2;  term1 = 1
            term2=term3;  term2= 2
   
   step 3: i=2  term1=1  term2=2
            i<ntimes   2<8 t
            term3=term1+term2;  1+2 -> 3
            term1=term2;  term1 = 2
            term2=term3;  term2= 3

   step 4: i=3  term1=2  term2=3
            i<ntimes   3<8 t
            term3=term1+term2;  2+3 -> 5
            term1=term2;  term1 = 3
            term2=term3;  term2= 5

   step 5: i=4  term1=3  term2=5
            i<ntimes   4<8 t
            term3=term1+term2;  5+3 -> 8
            term1=term2;  term1 = 5
            term2=term3;  term2= 8

      ...      
    */


    return 0;
}
