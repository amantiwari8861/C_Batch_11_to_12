#include<stdio.h>
int main()
{
    int x,y;
    printf("enter 2 values \n");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
        printf("lies at 1st quadrant \n");
    }
    else if (x<0 && y>0)
    {
        printf("lies at 2nd quadrant\n");
    }
    else if (x<0 && y<0)
    {
        printf("lies at 3rd quadrant\n");
    }
    else if (x>0 && y<0)
    {
        printf("lies at 4th quadrant\n");
    }
    else
    {
        printf("at line or origin");
    }
    
    
    


    return 0;
}
