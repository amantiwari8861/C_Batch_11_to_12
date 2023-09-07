#include<stdio.h>
#define MAX 100
int main()
{
    // Write a C program to find the common elements between two arrays of integers.  
    // int arr1[MAX],arr2[MAX],arr3[MAX],commonCount=0;
    int s1,s2,commonCount=0;
    printf("enter the size of first Array:");
    scanf("%d",&s1);
    printf("enter the size of second Array:");
    scanf("%d",&s2);
    int arr1[s1],arr2[s2];
    int max=(s1>s2)?s1:s2;
    int arr3[max];

    printf("enter first array:\n");
    for (int i = 0; i < s1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter second array:\n");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //logic
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[commonCount++]=arr1[i];
            }
        }
    }
    printf("The common elements are :\n");
    for (int i = 0; i < commonCount; i++)
    {
        printf("%d,",arr3[i]);
    }  
    return 0;
}
