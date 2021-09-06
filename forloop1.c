#include<stdio.h>
int main()
{
    int total_subjects,i,sum=0,temp;
    printf("enter the no. of subjects u want to give marks:");
    scanf("%d",&total_subjects);//5
    printf("enter the marks \n");
    for(i = 0; i < total_subjects; i++)
    {
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("the total marks is %d \n",sum);
    
    return 0;
}
//1-100
//100 - 1
// print you name 25 time
