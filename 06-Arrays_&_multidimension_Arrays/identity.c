#include<stdio.h>
int main()
{
    int r,c;
    printf("enter r & c \n");
    scanf("%d%d",&r,&c);

    if (r==c)
    {
        int matr1[r][c];
        printf("enter the matrix :\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d",&matr1[i][j]);
            }
        }
        int f0=0,f1=0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i==j )
                {
                   if ( matr1[i][j] != 1)
                   {
                        f1=1;
                   } 
                }
                else
                {
                    if (matr1[i][j] !=0)
                    {
                        f0=1;
                    }
                }  
            }
        }
        if (f0 == 0 && f1 == 0)
        {
            printf("identity matrix !");
        }
        else
        {
            printf("not identity matrix!");
        }
    }
    else
    {
        printf("invalid identity matrix!");
    }
    
    


    return 0;
}
