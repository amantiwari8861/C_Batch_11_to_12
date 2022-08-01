#include<stdio.h>
int main()
{
    int subjects;
    printf("enter the no. of subjects :");
    scanf("%d",&subjects);

    float marks[subjects],total=0;
    printf(" enter %d subjects marks \n",subjects);

    for (int i = 0; i < subjects; i++)
    {
        scanf("%f",&marks[i]);
    }
    //----------------------------logic------------
    for (int j = 0; j < subjects; j++)
    {
        total=total+marks[j];
    }
    printf(" your percentage is %0.2f %% \n",total/subjects);
    return 0;
}
