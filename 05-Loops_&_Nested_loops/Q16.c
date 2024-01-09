#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,result,temp,temp2;
    printf("enter 2 numbers :\n");
    scanf("%d%d",&num1,&num2);
    temp=num1;
    temp2=num2;
    while (num2 != 0) 
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    result=abs(temp*temp2)/num1;
    printf("The LCM is %d \n",result);

    return 0;
}
