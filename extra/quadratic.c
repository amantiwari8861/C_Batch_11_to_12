#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,result;
    printf("enter a,b and c :");
    scanf("%f%f%f",&a,&b,&c);

    result=( -b + sqrt(b*b-4*a*c))/2.0*a;

    printf("result =%f ",result);

    return 0;
}
