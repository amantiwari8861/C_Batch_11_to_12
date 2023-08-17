#include<stdio.h>
int main()
{
    int arr[]={7,2,12,8,3};
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = 0; j < 5-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            } 
        }
    }
    printf("\nthe sorted array is :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n\n");
    return 0;
}
