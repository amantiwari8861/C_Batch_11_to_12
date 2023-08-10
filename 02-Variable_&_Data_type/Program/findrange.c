#include<stdio.h>
#include<math.h>
int main()
{
    printf("the size of int is %d byte\n",sizeof(int));
    printf("the size of char is %d byte\n",sizeof(char));
    printf("the size of float is %d byte\n",sizeof(float));
    printf("the size of double is %d byte\n",sizeof(double));

    // double result=pow(25,25);
    // printf(" the result is %lf \n",result);

    double range=-pow(2,sizeof(int)*8-1);
    // printf(" %.0lf to %d ",range,(abs(range)-1));
    printf(" %.0lf to %.0lf \n",range,(range*-1)-1);

    float res=sqrt(625);
    printf(" result=%f",res);
    return 0;
}
