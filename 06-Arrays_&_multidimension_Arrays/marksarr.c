#include<stdio.h>
int main()
{
    int n;
    printf("enter the no. of subjects :");
    scanf("%d",&n);

    float marks[n],total=0;
    printf(" enter %d subjects marks \n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f",&marks[i]);
    }
    //----------------------------logic------------
    for (int j = 0; j < n; j++)
    {
        total=total+marks[j];
    }
    printf(" your percentage is %0.2f %% \n",total/n);
    return 0;
}
