#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);

    if (marks>=80 && marks<=100)
    {
        printf("A grade !\n");
    }
    else if (marks>=60 && marks<80)
    {
        printf("B grade !\n");
    }
    else if (marks>=50 && marks<60)
    {
        printf("C grade !\n");
    }
    else if (marks>=0 && marks<50)
    {
        printf("try again ! better luck next time \n");
    }
    else
    {
        printf("invalid number \n");
    }
    

    return 0;
}

// h.w according to marks give the grade to a student
// 90 - 100 A1 grade
// 80 - 90 A2 grade
// 70 - 80  B1 grade
// 60 - 70  B2 grade
// 50 - 60  C1 grade
// 0 - 50   fail