#include <stdio.h>

int main()
{
    int arr[10], find, flag = 0;
    printf("enter the array elements \n");

    for (int j = 0; j < 10; j++)
    {
        scanf("%d", &arr[j]);
    }
    printf("enter the element to find out from array \n");
    scanf("%d", &find);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == find)
        {
            printf("found at position %d \n", i);
            flag = 1;
        }
    }

    if (!flag)
    {
        printf("not found in array \n");
    }

    return 0;
}
