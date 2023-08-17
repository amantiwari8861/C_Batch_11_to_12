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
            printf(" found at index position %d \n",i);
            flag=1;
        }
        // else
        // {
        //     printf("not found at %d \n",i);
        // }
    }
    if (flag == 0)
    {
        printf("not found in array \n");
    }
    
    return 0;
}
