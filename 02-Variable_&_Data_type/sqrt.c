#include<stdio.h>
#include<math.h>
int main()
{
    // float result=pow(2,2.5);
    // printf("Result =%f \n",result);

    // printf("The result is %f \n",3.8);
    // printf("The result is %f \n",pow(5,2));

    // float sq=sqrt(625);
    // printf("the square root is %f \n",sq);

    int a=1,b=-3,c=-4,posRoot,negRoot;

    posRoot=(-b+sqrt(b*b-4*a*c))/2*a;
    negRoot=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("posRoot =%d \n",posRoot);
    printf("negRoot =%d \n",negRoot);

    return 0;
}
