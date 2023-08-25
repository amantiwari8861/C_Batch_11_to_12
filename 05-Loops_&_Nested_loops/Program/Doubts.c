#include<stdio.h>
int main()
{
/*
       * 
      * * 
     * * * 
    * * * * 
     * * * 
    * * * * 
   * * * * * 
  * * * * * * 
   * * * * * 
  * * * * * * 
 * * * * * * * 
* * * * * * * * 
    * * * *
    * * * *
    * * * *
    * * * * 
*/
    int space=7;
    for (int i = 1; i <= 12; i++)
    {
       for (int j = 1; j <= 8; j++)
       {
            if (space>=j)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
       }
        if(i%4==0)
        {
            space+=1;
        }
        else
        {
            space-=1;
        }
       printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j<4)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
