#include<stdio.h>
int main()
{
    int num=10;
    printf(" num = %d \n",num);//10
    num=num+2;
    printf(" num = %d \n",num);//12
    num++;
    // num++; or num=num+1; is same
    printf(" num = %d \n",num);//13
    num--;
    // num-- or num=num-1; is same
    printf(" num = %d \n",num);//12

    return 0;
}