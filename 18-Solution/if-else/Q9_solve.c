/* 9. Write a C program to accept a coordinate point in a XY coordinate
 system and determine in which quadrant the coordinate point lies. */

 #include<stdio.h>

 int main()
 {
    int cor1,cor2;
    printf("Enter the coordinate = ");
    scanf("%d%d",&cor1,&cor2);

    if ((cor1>0) && (cor2>0))
    {
       printf("The coordinate point (%d,%d) lies in the First quadrant.",cor1,cor2);
    }
    else
    {
        if ((cor1<0) && (cor2>0))
        {
            printf("The coordinate point (%d,%d) lies in the Second quadrant.",cor1,cor2);
        }
        else
        {
            if ((cor1<0) && (cor2<0))
            {
                printf("The coordinate point (%d,%d) lies in the Third quadrant.",cor1,cor2);
            }
            else
            {
                if ((cor1>0) && (cor2<0))
                {
                  printf("The coordinate point (%d,%d) lies in the Forth quadrant.",cor1,cor2);
                }
                
            }
            
        }
        
    }
    
     return 0;
 }
 