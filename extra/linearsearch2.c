#include<stdio.h>
int main()
{
    // int arr[]={23,775,960,144,155,844,783,989,492,829,861,735,574,18,491,900,37,326,77,192,171,550,846,459,877,915,658,601,132,174,429,440,629,253,880,783,48,29,885,941,614,140,429,576,325,175,988,522,51};
    // int len=sizeof(arr)/sizeof(4);
    // printf("the length of array is %d \n",len);

    int arr[10];
    printf("enter 10 values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int key,isfound=0;
    printf("enter value to be searched:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            printf("found at position %d \n",i);
            isfound=1;
            break;
        }        
    }
    if (isfound!=1)
    {
        printf("not found in array \n");
    }
    return 0;
}
