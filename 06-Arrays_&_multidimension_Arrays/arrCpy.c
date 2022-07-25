#include<stdio.h>
int main()
{
    int size;
    printf("enter the array size :");
    scanf("%d",&size);

    int arr1[size];
    printf("enter the %d element in array:\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("the copied array is :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
