#include<stdio.h>
#include<string.h>
struct Student //blueprint
{
    int rollno;
    char name[30];
    char gender;
    float percentage;
};
int main()
{
    int noOfStudents;
    printf("enter no. of students:");
    scanf("%d",&noOfStudents);

    struct Student studentsArray[noOfStudents];

    printf("Enter %d students data \n",noOfStudents);
    for (int i = 0; i < noOfStudents; i++)
    {
        printf("\n\tEnter %d Student Details \n",i+1);
        printf("Enter roll no. :");
        scanf("%d",&studentsArray[i].rollno);
        fflush(stdin);
        printf("Enter Name :");
        scanf("%[^\n]s",&studentsArray[i].name);
        fflush(stdin);
        printf("Enter Gender :");
        scanf("%c",&studentsArray[i].gender);
        printf("Enter Percentage :");
        scanf("%f",&studentsArray[i].percentage);
    }

    printf("\t\t The students details is :\n");
    for (int i = 0; i < noOfStudents; i++)
    {
        printf("Roll No. :%d \n",studentsArray[i].rollno);
        printf("Name :%s \n",studentsArray[i].name);
        printf("Gender :%c \n",studentsArray[i].gender);
        printf("Percentage :%f \n",studentsArray[i].percentage);
        printf("---------------------------------------------\n");
    }
    return 0;
}