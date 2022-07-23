#include<stdio.h>
int main()
{
    int size;
    struct Student
    {
        int id;
        char name[20];
        float fees;
    };
    printf("enter the no. of students : ");
    scanf("%d",&size);//let no. of students =3
    struct Student stu[size]; //structure array e.g stu[3]
    for (int i = 0; i < size; i++)
    {
        printf("\n ------------------------------------------  \n");
        printf("enter the id of %dth student : ",i+1);
        scanf("%d",&stu[i].id); //let stu[0].id =101 at first and then stu[1].id =102 and so on
        fflush(stdin);
        printf("enter the name of %dth student : ",i+1);
        scanf("%[^\n]s",&stu[i].name);
        fflush(stdin);
        printf("enter the fees of %dth student : ",i+1);
        scanf("%f",&stu[i].fees);
    }
    printf("\n\n\t\tTotal Student Details :\n");
    for (int i = 0; i < size; i++)
    {        
        printf("------------------------------------------\n");
        printf("the id is %d and name is %s and fees is %0.2f \n",stu[i].id,stu[i].name,stu[i].fees);
    }
    return 0;
}
