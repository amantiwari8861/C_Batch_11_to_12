#include<stdio.h>
int main()
{
    int arr[10],times,unique[10],uniqueCount=0;
    printf("enter the elements in array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //find unique elements
    for (int i = 0; i < 10; i++)
    {
        times=0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i]==arr[j])
                times++;
        }
        if(times==1)
        {
            unique[uniqueCount++]=arr[i];
            // printf("%d is unique\n",arr[i]);
        }
    }
    
    printf("the unique elements are :");
    for (int i = 0; i < uniqueCount; i++)
        printf("%d ",unique[i]);

    return 0;
}