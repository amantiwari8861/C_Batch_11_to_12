#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size \n");
    scanf("%d",&size);
    int arr[size],min=0,max=0;
    printf("enter the elements in array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(size==1)
    {
        min=max=arr[0];
        printf("max =%d and min= %d \n",max,min);
    }
    if(size>1)
    {
        min=arr[0];
        max=arr[0];
        for(i=0;i<size;i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        printf("the max = %d and min=%d \n",max,min);
    }
    return 0;
}