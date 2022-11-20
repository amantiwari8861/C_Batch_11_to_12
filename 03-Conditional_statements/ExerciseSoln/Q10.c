#include<stdio.h>
int main()
{
    float maths,physics,chemistry,total;
    printf("enter 3 subjects marks \n");
    scanf("%d%d%d",&maths,&physics,&chemistry);

    if (maths>=65 && physics>=55 && chemistry>=50)
    {
        if ( (maths+physics+chemistry) >=190 || (maths+physics)>=140 )
        {
           printf("The candidate is eligible for admission CS");
        }
        else
        {
           printf("The candidate is not eligible for admission CS");
        }
    }
    else
    {
        printf("The candidate is not eligible for admission in Btech.");
    }
    return 0;
}
