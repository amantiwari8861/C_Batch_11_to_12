#include<stdio.h>
int main()
{
    float height;
    printf("enter the height in cm :");
    scanf("%f",&height);

    if (height>0 && height<200)
    {
        printf(" Dwarf ");
    }
    else if (height>=200 && height<=400)
    {
        printf("medium height ");
    }
    else if (height>400 && height<=1000)
    {
        printf("tall person");
    }
    else
    {
        printf("invalid height");
    }
    return 0;
}