#include<stdio.h>
#include<math.h>
int main()
{
    printf("1.Square\n");
    printf("2.Rectangle\n");
    printf("3.Circle\n");
    printf("4.Cube\n");
    
    int choice;
    float area=0;
    printf("enter choice:");
    scanf("%d",&choice);

    if (choice==1)
    {
        float side;
        printf("enter side:");
        scanf("%f",&side);
        area=side*side;
    }
    else if (choice==2)
    {
        float l,b;
        printf("enter l&b:\n");
        scanf("%f%f",&l,&b);
        area=l*b;
    }
    else if (choice==3)
    {
        float r;
        printf("enter r:");
        scanf("%f",&r);
        area=M_PI*r*r;
    }
    else if (choice==4)
    {
       
        float side;
        printf("enter side:");
        scanf("%f",&side);
        area=side*side*side;
    }
    else
    {
        printf("invalid choice \n");
    }
    
    printf("the area is %f \n",area);
    



    return 0;
}
