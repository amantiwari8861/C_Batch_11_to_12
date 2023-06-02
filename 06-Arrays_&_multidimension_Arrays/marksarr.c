#include<stdio.h>
int main()
{
    int subjects;
    printf("enter the no. of subjects :");
    scanf("%d",&subjects);//5

    float marks[subjects],total=0,percent;
    //let marks[5]={78,89,98,67,54}
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