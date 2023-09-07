#include<stdio.h>
int main()
{
    // C * 9/5 +32;
    float celcius,farenhight;
    printf("enter the celcius :");
    scanf("%f",&celcius);

    farenhight=celcius*9/5+32;

    printf("the value in farenhight is %0.2f ",farenhight);

    return 0;
}
