#include<stdio.h>
#include<math.h>
int main()
{
    // 1634 => 1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 => 1634
    int num,rem,sum=0;
    printf("enter the number : ");
    scanf("%d",&num);//1634

    int original,original2;
    original=original2=num; //1634

    int count=0;
    while (num>0) //num destroyed
    { 
        ++count; //to count the digits
        num=num/10 ;
    }
    printf(" %d digit \n",count);

    while (original>0) // original destroyed
    {
        rem = original%10 ; 
        sum = sum + pow(rem,count);
        original=original/10 ;
    }
    if (sum == original2)
    {
        printf("this is a armstrong no. \n");
    }
    else
    {
        printf("this is not a armstrong no. \n");
    }
   
    return 0;
}

//h.w make psuedocode of this armstrong no. 
// pow(2,3);  2*2*2 =>8 ans