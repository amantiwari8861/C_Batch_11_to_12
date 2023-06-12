#include "mylib.h"
#include<math.h>
// float powerFxn(float,float); //declaration
int main()
{
    // int result=pow(5,3);
    // int result=sqrt(625);
    // printf(" %d \n",result);
    float r=powerFxn(6,3);
    printf(" %f \n",r);

    printf(" %f \n",powerFxn(2,4));
    printf(" %f \n",powerFxn(3,4));
    printf(" %f \n",powerFxn(7,2));
    printf(" %f \n",powerFxn(2,8));


    greet();
    return 0;
}

