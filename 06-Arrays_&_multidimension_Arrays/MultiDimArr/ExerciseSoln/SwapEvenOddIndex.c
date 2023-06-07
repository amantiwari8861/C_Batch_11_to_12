#include<stdio.h>
int main()
{
    int arr[10]={12,4,5,1,9,13,11,19,54,34};

    for (int i = 0; i < 10; i=i+2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("the array is :");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d  ",arr[i]);
    }
    return 0;
}
