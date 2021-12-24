/* 15. Write a C program to check whether a triangle can be formed by the
 given value for the angles. */

 #include<stdio.h>
 int main()
 {
     int a1,a2,a3,sum;

    printf("Enter the all three angle = ");
    scanf("%d%d%d",&a1,&a2,&a3);

    sum = a1+a2+a3;
    printf("The sum of all angle = %d \n",sum);

    if (sum == 180)
    {
        printf("This triangle is a valid triangle.");
    }
    else
    {
        printf("This triangle is not a valid triangle.");
    }
    
     return 0;
 }
 