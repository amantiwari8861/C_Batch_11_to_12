#include<stdio.h>

int main()
{
    int arr[10],find,flag=0;
    printf("enter 10 elements in array \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched :");
    scanf("%d",&find);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == find)
        {
            printf(" found at position %d \n",i+1);
            flag=1;
        }
    }
    if (flag == 0)
    {
        printf("not found in array \n");

    }
    
    return 0;
}
