#include<stdio.h>
#include<math.h>
float volumeOfSphere(float radius);
float volumeOfCylinder(float r,float h);
float areaOfTriangle(float b,float h);
float volumeOfSquare(float side);

int main()
{
    printf("\t\t1.Volume of Sphere \n");
    printf("\t\t2.Volume of Cylinder \n");
    printf("\t\t3.area of triangle \n");
    printf("\t\t4.Volume of Square \n");

    int choice;
    printf("enter the choice :");
    scanf("%d",&choice);

    float result,r,h,b,side;
    switch (choice)
    {
    case 1:
        printf("enter radius:");
        scanf("%f",&r);
        result=volumeOfSphere(r);
        break;
    case 2:
        printf("enter radius and height:");
        scanf("%f%f",&r,&h);
        result=volumeOfCylinder(r,h);
        break;
    case 3:
        printf("enter base & height:");
        scanf("%f%f",&b,&h);
        result=areaOfTriangle(b,h);
        break;
    case 4:
        printf("enter side:");
        scanf("%f",&side);
        result=volumeOfSquare(side);
        break;
    
    default:printf("invalid choice!!");
        break;
    }
    printf("\n\t\tthe result is %f \n",result);
    return 0;
}
float volumeOfSphere(float radius)
{
    return 4.0/3.0*M_PI*radius*radius*radius;
}
float volumeOfCylinder(float r,float h)
{
    return M_PI*r*r*h;
}
float areaOfTriangle(float b,float h)
{
    return (b*h)/2.0;
}
float volumeOfSquare(float side)
{
    return side*side*side;
}