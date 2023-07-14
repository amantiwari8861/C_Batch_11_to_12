#include<stdio.h>
int main()
{
    int sp,val;
    for (int i = 1; i <= 5; i++)
    {
        sp=5-i;
        val=0;
        for (int j = 1; j <= 9; j++)
        {
            if(sp>0 && j<=4)
            {
                printf(" ",sp);
            }
            else
            {
                if(j>5)
                {
                    val--;
                }
                else
                {
                    val++;
                }
                if(val>0)
                {
                    printf("%d",val);
                }
                else
                {
                    continue;
                }
            }
            sp--;
        }
        printf("\n");
    }
    


    return 0;
}
