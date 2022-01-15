#include<stdio.h>

int main()
{
    //&& || !
    int marks;
    printf("enter ur marks :");
    scanf("%d",&marks);

    /*
    if(marks>=80 || marks<=100)
    {
        printf("A grade !"); 
    }
    case 1: marks=45
    45>=80  || 45<=100
     0 || 1
    1
    case 2: marks=110
    110 >=80  || 110<=100
     1 || 0
    1
    case 3: marks=90
    90>=80 || 90<=100
    1 || 1
    1
    */
/*
    if(marks>=80 && marks<=100)
    {
        printf("A grade !"); 
    }
    
    case 1: marks=45
    45>=80  && 45<=100
     0 && 1
     0
    case 2: marks=110
    110 >=80  && 110<=100
     1 && 0
     0
    case 3: marks=90
    90>=80 && 90<=100
    1 && 1
    1
    */
    if(!(marks>=80 && marks<=100))
    {
        printf("A grade !"); 
    }
    // 85
    //  ( 85>=80 && 85<=100) ==>1
    //  !( 85>=80 && 85<=100)  ==> 0
    //  !( 45>=80 && 45<=100)  ==> 1
    return 0;
}