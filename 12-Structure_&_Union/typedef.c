#include<stdio.h>
// typedef struct employee
typedef struct    //this is also a valid syntax
{
    int id;
    char name[20];
}emp,emp2; //emp and emp2 defines the nickname here not the variable name
int main()
{
    // struct employee e1; //first we had to define structure variable like this
    //here emp is a user defined data type like struct employee
    emp e1;// typedef defines the alias(nickname)
    printf("enter the id :");
    scanf("%d",&e1.id);
    printf("the id of employee is %d ",e1.id);
    // printf("enter the id :");
    // scanf("%d",&emp2.id); //it will give error
    // printf("the id of employee is %d ",emp2.id); //it will give error
    //we can't use the nicknames(emp,emp2) as variable after defining typedef
    return 0;
}
