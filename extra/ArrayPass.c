#include<stdio.h>
void bubbleSort(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={45,10,65,43,98,97};
    bubbleSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}