#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);

    int arr[n],count=0,num;

    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                num=arr[i];
                count++;
            }
        }
    }
    printf("found %d  %d times\n",num,count);
    return 0;
}
