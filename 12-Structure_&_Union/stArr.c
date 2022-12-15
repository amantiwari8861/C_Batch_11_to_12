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
    struct Student stuArr[size]; //structure array e.g stuArr[3] 
    //it will equivalent to 3 student object (like stuArr1,stuArr2,stuArr3)
    for (int i = 0; i < size; i++)
    {
        printf("\n ------------------------------------------  \n");
        printf("enter the id of %dth student : ",i+1);
        scanf("%d",&stuArr[i].id); //let stuArr[0].id =101 at first and then stuArr[1].id =102 and so on
        fflush(stdin);
        printf("enter the name of %dth student : ",i+1);
        scanf("%[^\n]s",&stuArr[i].name);
        fflush(stdin);
        printf("enter the fees of %dth student : ",i+1);
        scanf("%f",&stuArr[i].fees);
    }
    printf("\n\n\t\tTotal Student Details :\n");
    for (int i = 0; i < size; i++)
    {        
        printf("------------------------------------------\n");
        printf("the id is %d and name is %s and fees is %0.2f \n",stuArr[i].id,stuArr[i].name,stuArr[i].fees);
    }
    return 0;
}
