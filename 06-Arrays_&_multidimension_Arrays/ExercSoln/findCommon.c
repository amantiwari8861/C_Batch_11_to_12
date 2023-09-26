#include<stdio.h>
int main()
{
    // int arr1[]={2,3,5,4,4,7,1,6};
    // int arr2[]={7,8,9,3,3,3,9,5};
    int arr1[8],arr2[10];
    printf("enter 1st array \n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter 2nd array \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int min=8<10?8:10;
    int commonElement[min],countCommon=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr1[i]==arr2[j])
            {
                commonElement[countCommon++]=arr1[i];
                break;
            }
        }   
    }
    printf("common  elements are :");
    for (int i = 0; i < countCommon; i++)
    {
        printf("%d ",commonElement[i]);
    }
    

    return 0;
}
