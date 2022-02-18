#include <stdio.h>
int main()
{
    int marks;
    printf("enter  ur marks");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("a grade");
    }
    else if (marks >= 60 && marks <= 79)
    {
        printf("b grade");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("c grade");
    }
else if(marks>=33 && marks<=49)
{
    printf("passed");
}
else
{
    printf("try again");
}


    return 0;
}
