#include<stdio.h>

int main()
{
    //Array : it is a homogeneous collection of data which provides
    //  a sequential memory allocation

    // int marks1,marks2,marks3,marks4,marks5;
    // printf("enter value of marks \n");
    // scanf("%d",&marks1);
    // scanf("%d",&marks2);
    // scanf("%d",&marks3);
    // scanf("%d",&marks4);
    // scanf("%d",&marks5);
    // printf("\n ----------------------------------------  \n");
    // printf("the value of marks is %d \n",marks1);
    // printf("the value of marks is %d \n",marks2);
    // printf("the value of marks is %d \n",marks3);
    // printf("the value of marks is %d \n",marks4);
    // printf("the value of marks is %d \n",marks5);

    int marks[5]; //1st way to declare array
    // int marks[5]={101,201,301,401,501}; //2nd way to declare and initialize an array
    // int marks[]={211,311,41,51,61}; // 3rd way to declare and initialize an array
    
    marks[0]=10;
    marks[1]=20;
    marks[2]=30;
    marks[3]=40;
    marks[4]=50;

    printf("the value of marks[0] is %d \n",marks[0]);
    printf("the value of marks[1] is %d \n",marks[1]);
    printf("the value of marks[2] is %d \n",marks[2]);
    printf("the value of marks[3] is %d \n",marks[3]);
    printf("the value of marks[4] is %d \n",marks[4]);
    return 0;
}
