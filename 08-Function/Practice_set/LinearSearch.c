#include<stdio.h>
int len(int[]);
int linearSearch(int [],int,int);
int main()
{
    int size,key;
    printf("enter the size of array\n");
    scanf("%d",&size);

    int arr[size];
    printf("enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter element to be searched:");
    scanf("%d",&key);

    int pos=linearSearch(arr,key,size);
    
    // if (pos>=0)
    // {
    //     printf("found at index position %d ",pos);
    // }
    // else
    // {
    //     printf("not found!");
    // }
    if (pos==-1)
    {
        printf("not found! in array");
    }
    
    return 0;
}
int linearSearch(int arr[],int key,int size)
{
    int found=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            // return i;
            printf(" found at index position %d \n",i);
            found=1;
        }
    }
    if (found==0)
    {
        return -1;   
    }    
}