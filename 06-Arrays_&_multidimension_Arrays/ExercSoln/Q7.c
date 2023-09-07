#include<stdio.h>
int main()
{
    int arr[]={10,45,5,45,34,24,29,98,2,9};

    for (int pass = 0; pass < 10-1; pass++)
    {
        for (int j = 0; j < 10-pass-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }            
        }
    }
    printf("the sorted array is :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\b ");



    return 0;
}
