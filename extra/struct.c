#include<stdio.h>
#include<string.h>
int main()
{
    struct Student //user-defined data type
    {
        int rollno;
        char name[30];
        char gender;
        float fee; 
        char address[80];
    }stu3,stu4={103,"Abc",'f',56.54,"noida 62"};

    struct Student stu1,stu2;
    stu1.rollno=101;
    stu1.gender='M';
    strcpy(stu1.name,"Aman Tiwari");
    stu1.fee=2.47;
    strcpy(stu1.address,"Noida sec-62");

    stu2.rollno=102;
    stu2.gender='F';
    strcpy(stu2.name,"Harshi Tiwari");
    stu2.fee=2.7;
    strcpy(stu2.address,"Noida sec-63");


    printf("student 1 roll no : %d \n",stu1.rollno);
    printf("student 1 roll no : %c \n",stu1.gender);
    printf("student 1 roll no : %s \n",stu1.name);
    printf("student 1 roll no : %f \n",stu1.fee);
    printf("student 1 roll no : %s \n",stu1.address);

    printf("student 2 roll no : %d \n",stu2.rollno);
    printf("student 2 roll no : %c \n",stu2.gender);
    printf("student 2 roll no : %s \n",stu2.name);
    printf("student 2 roll no : %f \n",stu2.fee);
    printf("student 2 roll no : %s \n",stu2.address);

    printf("student 4 roll no : %d \n",stu4.rollno);
    printf("student 4 roll no : %c \n",stu4.gender);
    printf("student 4 roll no : %s \n",stu4.name);
    printf("student 4 roll no : %f \n",stu4.fee);
    printf("student 4 roll no : %s \n",stu4.address);




    return 0;
}
