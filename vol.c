#include<stdio.h>

void volume(int *r,int *h,int *res)
{
    *res=3.14*(*r)*(*r)*(*h);
}
int main()
{
    int r,h,result=0;
    printf("enter r,h : \n");
    scanf("%d %d",&r,&h);
    printf("the value before in main radius=%d and height=%d and result=%d \n",r,h,result);
    volume(&r,&h,&result);
    printf("the value after in main radius=%d and height=%d and result=%d \n",r,h,result);
    return 0;
}