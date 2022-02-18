#include<stdio.h>
int main()
{
    //WAP to Sum of all marks given by student then find the percentage.
    int marks[100],subject,sum=0;   
    float per;
    // array's drawback is that it is static (can't be shrink and grow at runtime)
    printf("enter the no. of subjects \n");
    scanf("%d",&subject);

    for (int i = 0; i < subject; i++)
    {
        printf("enter the %dth subjects marks :\n",i);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    // printf("the sum of marks is %d \n",sum);
    per=(float)sum/subject;
    printf("the percentage is %0.2f %% \n",per);

    for (int i = 0; i < subject; i++)
    {
        printf("the subject %dth marks is %d \n",i,marks[i]);
    }
    


    return 0;
}

/*
 Array

    Input and display array elements
    WAP to Sum of all marks given by student then find the percentage.
    Find second largest element in array
    Copy one array to another
    Insert new element in array
    Delete an element from array
    Find frequency of array elements

*/