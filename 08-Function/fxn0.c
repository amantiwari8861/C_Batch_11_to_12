#include<stdio.h>
int powerFxn(int,int);//declaration
int main()//starting point of a program
{
    printf("before calling in main \n");
    int num,power;
    printf("enter the number and power\n");
    scanf("%d%d",&num,&power);
    int result=powerFxn(num,power);//calling of fxn
    printf("the result is %d \n",result);
    printf("after calling in main \n");
    return 0;//ending point of a program
}
int powerFxn(int num,int power) //body
{
    printf("inside powerFxn \n");
    int pow=1;
    for(int i=0;i<power;i++) //i=0,1,2,3
    {
        pow=pow*num;// 1*2=2 2*2=4 4*2=8 8*2=16 
    }
    return pow; //returning the pow = 16
}