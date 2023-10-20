#include<stdio.h>
struct Student
{
    int rollNo;
    char address[50];
};
void printStudentDetails(struct Student s)
{
    printf("=========== Student Details ===========\n");
    printf("%d \n",s.rollNo);
    printf("%s \n",s.address);
}
int main()
{
    struct Student s1={1,"Noida 62"};
    struct Student s2={2,"Niit 62"};

    printStudentDetails(s1);
    printStudentDetails(s2);

    return 0;
}

