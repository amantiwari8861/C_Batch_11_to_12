#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number : ");
    scanf("%d",&num); //123
    int original=num;
    while (num>0)
    {
        rem = num%10 ; 
        sum = sum*10 + rem;
        num=num/10 ;
    }
    printf("the reverse is %d \n",sum);

    // if (sum==original)
    // {
    //     printf("palindrome !\n");
    // }
    // else
    // {
    //     printf("not palindrome !");
    // }
    return 0;
}
/*

step 1: num = 123
        sum=0;
        rem= num%10;  // 3
        sum=sum*10+rem; //0+3
        num=num/10; //12.3 -> 12

step 2: num = 12,sum=3
        rem= num%10;  // 2
        sum= sum*10+rem; // 30+2 -> 32
        num=num/10; //1.2 -> 1

step 3: num = 1,sum=152
        rem= num%10;  //  1%10 -> 1
        sum= sum*10+rem; // 320+1 -> 321
        num=num/10; //0.1 -> 0

step 4: num>0  false X
*/