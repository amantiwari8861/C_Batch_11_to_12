#include<stdio.h>
#include<math.h>
int powerFxn(int,int);//declaration
int main()//starting point of a program
{
    int num,power;
    printf("enter the number and power\n");
    scanf("%d%d",&num,&power);
    int result=powerFxn(num,power);//calling of fxn
    printf("the result is %d \n",result);

    printf(" The power is %d \n",powerFxn(2,8));
    printf(" The power is %d \n",powerFxn(2,4));
    printf(" The power is %d \n",powerFxn(3,4));
    printf(" The power is %d \n",powerFxn(7,2));
    printf(" The power is %d \n",powerFxn(4,3));
    // printf(" The power is %f \n",pow(3,5));
    return 0;//ending point of a program
}
int powerFxn(int num,int power) //body
{
    // printf("inside powerFxn \n");
    int result=1;
    for(int i=0;i<power;i++) //i=0,1,2,3
    {
        result=result*num;// 1*2=2 2*2=4 4*2=8 8*2=16 
    }
    return result; //returning the result = 16
}