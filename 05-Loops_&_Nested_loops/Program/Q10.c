#include <stdio.h>
#include<math.h>
int main()
{
    int num, power;
    printf("enter the number and power\n");
    scanf("%d%d", &num, &power);//let num=2 & power=4

    int result = 1;
    for (int i = 0; i < power; i++) // i=0,1,2,3
    {
        result = result * num; // 1*2=2 2*2=4 4*2=8 8*2=16
    }
    printf("the result is %d \n",result);

    return 0;
}
