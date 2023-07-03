#include<stdio.h>
#include<string.h>
int main()
{
    //Array : homogenous collection of data
    // int arr[5]; -> 5 blocks of type int
    //structure : heterogeneous collection of data 
    struct Student
    {
        int id;
        char name[20];
        float fees;
        double marks;
    // };
    // }stu1;
    }stu1,stu3={203,"Aman",10000,80.0}; //2 variables of data type struct Student //1st approach

    struct Student stu2={201,"Kamal",20000,80};
    printf("Student 2:the id is %d and name is %s and fees is %f marks %lf\n",stu2.id,stu2.name,stu2.fees,stu2.marks);
    
    // stu1.id=102;//pre-defined
    // stu1.name="AMan"; //it will give error
    // stu1.name={"AMan"}; //it will give error
    // stu1.name[]={"AMan"}; //it will give error
    // strcpy(stu1.name,"Aman");//pre-defined
    // stu1.fees=5000.50;;
    // stu1.marks=85;
    printf("Enter the id:\n");
    scanf("%d",&stu1.id);
    fflush(stdin);
    printf("enter the name : ");
    scanf("%[^\n]s",&stu1.name);
    printf("enter the fees : ");
    scanf("%f",&stu1.fees);
    printf("enter the marks : ");
    scanf("%lf",&stu1.marks);

    printf("Student 1: the id is %d and name is %s and fees is %f marks %lf\n",stu1.id,stu1.name,stu1.fees,stu1.marks);

    // printf("the id is %d and name is %s and fees is %0.2f and marks is %f \n",stu3.id,stu3.name,stu3.fees,stu3.marks);
    
    // struct Student stu4; //2nd approach
    // stu4.id=103;
    // printf("enter the name : ");
    // scanf("%[^\n]s",&stu4.name);
    // printf("enter the fees : ");
    // scanf("%f",&stu4.fees);
    // printf("the id is %d and name is %s and fees is %0.2f \n",stu4.id,stu4.name,stu4.fees);
   
    return 0;
}
