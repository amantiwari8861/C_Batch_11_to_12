#include<stdio.h>
int main()
{
    int num,count;
    printf("enter the number : ");
    scanf("%d",&num);

    for(count=0;num>0; num=num/10)
    {   
        count++;
    }

    printf(" total digit :%d ",count);
    return 0;
}
    /*
        step 1: let num=8769
                count=0; 
                8769 > 0 t
                count=1;
                num=num/10;   => num = 8769/10 -> 876.9 -> 876
        step 2:
                num=876
                count=1; 
                876 > 0 t
                count=2;
                num=num/10;   => num = 876/10 -> 87.6 -> 87  
        step 3:
                num=87
                count=2; 
                87 > 0 t
                count=3;
                num=num/10;   => num = 87/10 -> 8.7 -> 8
        step 4:
                num=8
                count=3; 
                8 > 0 t
                count=4;
                num=num/10;   => num = 8/10 -> 0.8 -> 0
        step 5: num=0;
                count=4;
                0> 0 false loop terminated.
    */






// let num=763466837

// num=num/10; -> 76346683
// num=num/10; -> 7634668
// num=num/10; -> 763466
// num=num/10; -> 76346
// num=num/10; -> 7634
// num=num/10; -> 763
// num=num/10; -> 76
// num=num/10; -> 7
// num=num/10; -> 0



