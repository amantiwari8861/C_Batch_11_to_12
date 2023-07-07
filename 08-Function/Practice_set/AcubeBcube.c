#include<stdio.h>
#include<math.h>
int AcubeBcube(int,int); //declare

int main()
{
    int res=AcubeBcube(3,2); //calling
    printf("the result is %d \n",res);

    return 0;
}
int AcubeBcube(int a,int b)
{
    int result = pow(a,3) + pow(b,3) +3*a*a*b + 3*a*b*b;
    return result;
}