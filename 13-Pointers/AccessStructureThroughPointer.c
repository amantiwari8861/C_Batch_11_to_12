#include<stdio.h>
int main()
{
    int n;
    struct Student
    {
        int id;
        char name[20];
        float fee;
    };
    printf("enter the no. of Students : ");
    scanf("%d",&n);//3
    struct Student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n ------------------------------------------  \n");
        printf("enter the id of %dth student : ",i+1);
        scanf("%d",&stu[i].id);
        fflush(stdin);
        printf("enter the name of %dth student : ",i+1);
        scanf("%[^\n]s",&stu[i].name);
        fflush(stdin);
        printf("enter the fee of %dth student : ",i+1);
        scanf("%f",&stu[i].fee);
    }
    
    int id;
    struct Student *stuptr=NULL;
    printf("which student's data u wanna see :");
    scanf("%d",&id);
    stuptr=&stu[id];

    printf("\n ------------------------------------------  \n");
    printf("the id is %d and name is %s and fee is %0.2f \n",stuptr -> id,stuptr->name,stuptr->fee);
    return 0;
}
