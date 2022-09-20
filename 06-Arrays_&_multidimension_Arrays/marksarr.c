#include<stdio.h>
int main()
{
    int subjects;
    printf("enter the no. of subjects :");
    scanf("%d",&subjects);//5

    float marks[subjects],total=0,percent;
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
    percent=total/subjects;
    printf(" your percentage is %0.2f %% \n",percent);
    return 0;
}
