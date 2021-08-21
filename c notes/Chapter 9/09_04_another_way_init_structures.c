#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee harry = {100, 34.23, "Harry"};

    printf("Code is: %d \n", harry.code);
    printf("Salary is: %f \n", harry.salary);
    printf("Name is: %s \n", harry.name);
 

    return 0;
}