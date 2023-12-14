#include<stdio.h>
// #include<conio.h>
int main()
{
    //code
    int age;
    printf("enter ur age:");
    scanf("%d",&age);
     if(age>=18)
     {
        printf("u are ready to vote\n");
     }
     else
     {
        printf("u can't vote\n");
     }
    // getch();
    return 0;
}