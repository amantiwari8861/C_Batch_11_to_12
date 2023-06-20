<<<<<<< HEAD
#include<stdio.h>

int main()
{
    typedef int i; // i is a nickname for int

    i num=10;
    printf(" num = %d \n",num);

    return 0;
}
=======
#include<stdio.h>

int main()
{
    typedef int i; // i is a nickname for int

    i num=10;
    printf(" num = %d \n",num);

    typedef struct
    {
        int id;
        char *name;
        char address[30];
    }Student;

    Student stu;
    stu.id=100;
    stu.name="Aman";
    // stu.address="noida 62";//error

    printf(" %d ",stu.id);
    printf(" %s \n",stu.name);
    

    return 0;
}
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
