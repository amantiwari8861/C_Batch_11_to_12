#include <stdio.h>
#include <string.h>
float largest(float arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    float max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

struct Student
{
    char branch_info[20];
    char name[20];
    int roll_no;
    float CGPA;
    char branch[10];
};
int main()
{
    float CS[10], EC[10], MEC[10];
    struct Student stu[10]; //structure array
    for (int i = 0; i < 10; i++)
    {
        printf("\n ------------------------------------------  \n");
        fflush(stdin);
        printf("enter the branch_info of %dth student : ", i + 1);
        scanf("%[^\n]s", &stu[i].branch_info);
        fflush(stdin);
        printf("enter the name of %dth student : ", i + 1);
        scanf("%[^\n]s", &stu[i].name);
        fflush(stdin);
        printf("enter the roll_no of %dth student : ", i + 1);
        scanf("%d", &stu[i].roll_no);
        printf("enter the CGPA of %dth student : ", i + 1);
        scanf("%f", &stu[i].CGPA);
        fflush(stdin);
        printf("enter the branch of %dth student : ", i + 1);
        scanf("%[^\n]s", &stu[i].branch);
        fflush(stdin);

        if (!strcmp(stu[i].branch, "CS"))
        {
            CS[i] = stu[i].CGPA;
        }
        else if (!strcmp(stu[i].branch, "EC"))
        {
            EC[i] = stu[i].CGPA;
        }
        else if (!strcmp(stu[i].branch, "MEC"))
        {
            MEC[i] = stu[i].CGPA;
        }
    }

    float max = largest(CS);
    float max2 = largest(EC);
    float max3 = largest(MEC);

    for (int i = 0; i < 10; i++)
    {
        if (max == stu[i].CGPA)
        {
            printf("%s has maximum in cs \n", stu->name);
        }
        else if (max2 == stu[i].CGPA)
        {
            printf("%s has maximum in EC \n", stu->name);
        }
        else if (max3 == stu[i].CGPA)
        {
            printf("%s has maximum in MEC \n", stu->name);
        }
    }
    return 0;
}
