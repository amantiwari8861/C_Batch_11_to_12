#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of elements:");
    scanf("%d",&n);//7
    int arr[n];
    printf("enter %d elements \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for (int pass = 0; pass < n-1; pass++)
    {
        for (int j = 0; j < n-pass-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    printf("the sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\nthe second largest element is %d \n",arr[n-2]);
    
    return 0;
}
