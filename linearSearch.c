#include<stdio.h>

int main()
{
    int arr[10],find;
    printf("enter the array elements \n");
    
    for (int j = 0; j < 10; j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("enter the element to find out from array \n");
    scanf("%d",&find);
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==find)
        {
            printf("found at position %d \n",i);
        }
        else
        {
            printf("not found at position %d \n",i);
        }
    }
    

    return 0;
}
