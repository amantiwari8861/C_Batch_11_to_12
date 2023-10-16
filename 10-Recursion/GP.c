// The general form of Geometric Progression is:
//     a*r^0, a*r^1, ar^2, ar^3, ar^4,…, ar^n-1
//     Where,
//     a = First term (1)
//     r = common ratio (2)
//     n= last term (6)
//     ar^n-1 = nth term
//     1*2^0 1*2^1 1*2^2 ..  1*2^n
//      1  2  4  ...... 64

#include<stdio.h>
#include<math.h>
void printGP(float i,float a,float r,float n)
{
    if (i<n)//base condition
    {
        printf(" %.0f ",a*pow(r,i));
        printGP(i+1,a,r,n);//calling himself
    }
}
int main()
{
    float a,r,n,i=0;
    printf("Enter a r and n :\n");
    scanf("%f%f%f",&a,&r,&n);//1 2 6
    printGP(i,a,r,n);
    return 0;
}
