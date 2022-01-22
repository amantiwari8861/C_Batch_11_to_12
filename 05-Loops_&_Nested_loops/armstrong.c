#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number : ");
    scanf("%d",&num); //153
    int original=num;
    while (num>0)
    {
        rem = num%10 ; 
        sum = sum + rem*rem*rem;
        num=num/10 ;
    }
    if (sum == original)
    {
        printf("this is a armstrong no. \n");
    }
    else
    {
        printf("this is not a armstrong no. \n");
    }
    
    return 0;
}

/* 
    // 153  =>  3*3*3 + 5*5*5 + 1*1*1 => 153
step 1: num = 153
        sum=0;
        rem= num%10;  // 3
        sum=sum+rem*rem*rem; //0+27 => 27
        num=num/10; //15.3 -> 15

step 2: num = 15,sum=27
        rem= num%10;  // 5
        sum= sum+rem*rem*rem; //27+125 =>152
        num=num/10; //1.5 -> 1

step 3: num = 1,sum=152
        rem= num%10;  //  1%10 -> 1
        sum= sum+rem*rem*rem; //152+1 => 153
        num=num/10; //0.1 -> 0
step 4: num>0  false X
*/
//h.w make psuedocode of this armstrong no. 