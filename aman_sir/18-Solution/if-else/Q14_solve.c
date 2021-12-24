// 14. Write a C program to check whether a triangle is Equilateral,
//  Isosceles or Scalene.

#include<stdio.h>
int main()
{
    int s1,s2,s3;

    printf("Enter the three sides of Triangle = ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if ((s1==s2) && (s2==s3))
    {
        printf("This is an Equilateral triangle.");
    }
    else
    {
        if ((s1==s2) || (s2==s3) || (s3==s1))
        {
            printf("This is an Isosceles triangle.");
        }
        else
        {
            printf("This is an Scalene triangle.");
        }
        
    }
    
    
    return 0;
}
