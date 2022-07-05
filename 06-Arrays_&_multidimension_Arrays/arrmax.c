#include<stdio.h>
int main()
{
    int arr[10],max=0;
    printf("enter 10 numbers \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    // 56 67 34 23 45 12 89 23 67 60
    max=arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    printf(" maximum is %d \n",max);
    return 0;
}
