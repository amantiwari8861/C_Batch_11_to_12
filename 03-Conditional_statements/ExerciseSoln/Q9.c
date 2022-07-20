#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x and y coordinate \n");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
        printf("The point is in the first quadrant \n");
    }
    else if(x<0 && y>0)
    {
        printf("The point is in the second quadrant \n");
    }
    else if(x<0 && y<0)
    {
        printf("The point is in the third quadrant \n");
    }
    else if(x>0 && y<0)
    {
        printf("The point is in the fourth quadrant \n");
    }
    else
    {
        printf("at origin or any line ! \n");
    }


    return 0;
}
