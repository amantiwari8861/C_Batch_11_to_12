#include<stdio.h>
int main()
{
    int total_subjects,i,sum=0,temp;
    float average;
    printf("enter the no. of subjects u want to give marks:");
    scanf("%d",&total_subjects);//7

    printf("enter the marks \n");
    for(i = 1; i <= total_subjects; i++)
    {
        printf("enter marks of subject %d :",i);
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("the total marks is %d \n",sum);
    average=sum/total_subjects;
    printf("the average is %f \n",average);
    return 0;
}
//1-100
//100 - 1
// print you name 25 time
