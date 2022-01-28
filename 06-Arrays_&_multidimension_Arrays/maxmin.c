#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size \n");
    scanf("%d",&n);
    int arr[n],min=0,max=0;
    printf("enter the elements in array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n==1)
    {
        min=max=arr[0];
        printf("max =%d and min= %d \n",max,min);
    }
    if(n>1)
    {
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                max=arr[i];
            }
            else
            {
                max=arr[i+1];
            }
        }
        printf("the max = %d and min=%d \n",max,min);
    }
    return 0;
}