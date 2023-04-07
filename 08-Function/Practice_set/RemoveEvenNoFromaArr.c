#include<stdio.h>
void removeEven(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            arr[i]=0;
        }
    }
}
int main()
{
    int size,key;
    printf("enter the size of array\n");
    scanf("%d",&size);

    int arr[size];
    printf("enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    removeEven(arr,size);

    printf("After change the array is :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}
