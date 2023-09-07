#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float area;
    printf(" 1.Square \n 2.Rectangle \n 3.Triangle \n 4.Cone \n");
    printf("enter ur Choice :");
    scanf("%d",&choice);

    if (choice == 1)
    {
        float side;
        printf("enter side : ");
        scanf("%f",&side);

        area=6*side*side;
        printf("The area of square is %f \n",area);
    }
    else if (choice==2)
    {
        float l,b;
        printf("enter length and breadth:\n");
        scanf("%f%f",&l,&b);

        area=l*b;
        printf("The area of rectangle is %f \n",area);
    }
    else if (choice==3)
    {
        float b,h;
        printf("enter base and height:\n");
        scanf("%f%f",&b,&h);

        area=0.5*b*h;
        printf("The area of triangle is %f \n",area);
    }
    else if (choice==4)
    {
        float r,h,pi=3.14;
        printf("enter length and breadth:\n");
        scanf("%f%f",&r,&h);

        area=pi*r*(r+sqrt(h*h+r*r));
        printf("The area of rectangle is %f \n",area);
    }
    else
    {
        printf("invalid choice!!\n");
    }
    return 0;
}
