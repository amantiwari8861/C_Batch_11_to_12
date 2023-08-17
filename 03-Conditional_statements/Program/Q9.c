#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y\n");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    {
        printf("at origin\n");
    }
    else if (x>0 && y>0)
    {
        printf("in 1st quadrant\n");
    }
    else if (x<0 && y>0)
    {
        printf("in 2nd quadrant\n");
    }
    else if (x<0 && y<0)
    {
        printf("in 3rd quadrant\n");
    }
    else if (x>0 && y<0)
    {
        printf("in 4th quadrant\n");
    }
    else
    {
        printf("at line \n");
    }
    
    



    return 0;
}
