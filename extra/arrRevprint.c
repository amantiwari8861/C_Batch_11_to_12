#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements is array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int j=n-1;j>=0;j--)
    {
        printf(" %d ",arr[j]);
    }

    return 0;
}
