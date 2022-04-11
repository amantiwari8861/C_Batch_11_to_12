#include<stdio.h>
int main()
{
    int term1=-1,term2=1,term3,ntimes;
    printf("enter the number :");
    scanf("%d",&ntimes);//9
    // 0 1 1 2 3 5 8 13 21 
    printf("the series is :\n");
    for (int i = 0; i < ntimes; i++)
    {
        term3=term1+term2;
        printf(" %d ",term3);
        term1=term2;
        term2=term3;
    }
   /*               psuedocode
   step 1: i=0  term1=-1  term2=1 let ntimes=10
            i<ntimes   1<10 t
            term3=term1+term2;  -1+1 -> 0
            term1=term2;  term1 = 1
            term2=term3;  term2= 0

   step 2: i=1  term1=1  term2=0
            i<ntimes   1<10 t
            term3=term1+term2;  1+0 -> 1
            term1=term2;  term1 = 0
            term2=term3;  term2= 1
   
   step 3: i=2  term1=0  term2=1
            i<ntimes   2<10 t
            term3=term1+term2;  0+1 -> 1
            term1=term2;  term1 = 1
            term2=term3;  term2= 1

   step 4: i=3  term1=1  term2=1
            i<ntimes   3<10 t
            term3=term1+term2;  1+1 -> 2
            term1=term2;  term1 = 1
            term2=term3;  term2= 2

   step 5: i=4  term1=1  term2=2
            i<ntimes   4<10 t
            term3=term1+term2;  1+2 -> 3
            term1=term2;  term1 = 2
            term2=term3;  term2= 3

      ...      
    */


    return 0;
}
