#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a =34;
    char b = 'g';
    float d = 234.3543;
    // employee e1;
    // e1.salary = 34.454; --->wont work without employee structure

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    // e1.name = "Harry"; --> wont work
    strcpy(e1.name, "Harry");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}