#include<stdio.h>
float areaofsquare(float);
float perimeter(float);
int main()
{
    int choice;
    float result,side;
    printf("1.Area of square\n");
    printf("2.perimeter\n");
    printf("enter choice:");
    scanf("%d",&choice);

    printf("Enter side:");
    scanf("%f",&side);
    switch(choice)
    {
        case 1:result=areaofsquare(side);
            break;
        case 2:result=perimeter(side);
            break;
        default:printf("pls input valid choice!\n");
    }
    printf("the result is %f \n",result);

    return 0;
}
float areaofsquare(float side)
{
    return side*side;
}
float perimeter(float side)
{
    return 4*side;
} 