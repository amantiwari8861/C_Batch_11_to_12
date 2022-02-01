#include<stdio.h>
void fibonacci(int n) //let n=5
{
    //0 1 1 2 3 5 8 13 21 34 55 ...
    static int a=-1,b=1,c=0;
    if(n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        fibonacci(n-1);
    }
}
int main()
{
    int num;
    printf("enter the number of term :");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}