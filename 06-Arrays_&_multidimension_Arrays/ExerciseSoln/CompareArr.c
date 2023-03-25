#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);

    int arr[n],count=0,num;

    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            printf(" arr[i]=%d arr[j]=%d  ",arr[i],arr[j]);
        }
        printf("\n");
    }
    
    return 0;
}
