#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 elements in array \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i]=arr[i];
    }
    printf("The Copied Array is :");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d  ",arr2[i]);
    }
    return 0;
}
