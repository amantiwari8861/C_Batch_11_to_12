#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    int original=num;
    while (num >0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;        
    }
    // printf("the value of sum after calculation :%d \n",sum);
    if (original ==  sum){        printf("%d is armstrong \n",original);    }
    else{    printf("%d is not armstrong \n",original);    }    
    return 0;
}
    /*

    step 1: let num=153,rem,sum=0
            153 >0 true
            rem=153%10 = 3
            sum = sum+rem*rem*rem;
            sum= 0+ 27
            num= 153/10 => 15.3 => 15

    step 2: num=15 ,rem=3,sum=27
            15>0 T
            rem= 15%10 => 5
            sum = 27 + 125 => 152
            num= 15/10 => 1.5 => 1






    // let num=153
    //   1*1*1 + 5*5*5 + 3*3*3
    //   1 + 125 + 27 
    // 153

    //169
    // 1*1*1 + 6*6*6 + 9*9*9
    // 1 + 216 + 729
    // 946
    */