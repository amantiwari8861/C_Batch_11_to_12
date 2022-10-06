#include<stdio.h>
int main()
{
    int arr[10],c;
    printf("enter 10 elements in array \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
    }
    printf(" min = %d \n",min);
    return 0;
}
