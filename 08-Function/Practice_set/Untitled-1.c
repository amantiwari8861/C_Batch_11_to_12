#include<stdio.h>
int powerFxn();
int main()
{
    int r1=powerFxn();
    printf(" res =%d \n",r1);
    int r2=powerFxn();
    printf(" res =%d \n",r2);
    int r3=powerFxn();
    printf(" res =%d \n",r3);
    int r4=powerFxn();
    printf(" res =%d \n",r4);
    return 0;
}
int powerFxn()
{
    int num,power,result=1;
    printf("enter the number and power\n");
    scanf("%d%d",&num,&power);

    for(int i=0;i<power;i++) 
    {
        result=result*num; 
    }
    return result;
}