#include<stdio.h>
void add();  //declaration of fxn
int powerFxn(int,int);
int main()//starting point of a program
{
    printf("before calling in main \n");
    add();//calling of fxn
    int num,power;
    printf("enter the number and power\n");
    scanf("%d%d",&num,&power);
    int result=powerFxn(num,power);
    printf("the result is %d \n",result);

    printf("enter the number and power again\n");
    scanf("%d%d",&num,&power);
    int result2=powerFxn(num,power);
    printf("the result2 is %d \n",result2);

    printf("after calling in main \n");
    return 0;//ending point of a program
}
void add(/*argument or parameter*/)
{   
    printf("hii i am adding something\n");
} 
int powerFxn(int num,int power)
{
    printf("inside powerFxn \n");
    int pow=1;
    for(int i=0;i<power;i++) //i=0,1,2,3
    {
        pow=pow*num;// 1*2=2 2*2=4 4*2=8 8*2=16 
    }
    return pow; //returning the pow = 16
}