#include<stdio.h>

// int getArrayLength(int arr[])
// {
//     int i;
//     for ( i = 0; arr[i] != '\0'; i++);

//     // return sizeof(arr)/sizeof(int);
//     return i-1;
// }
void sort(int len,int arr[])
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}
void printArray(int len,int arr[])
{
    for (int i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
        if (i!=len-1)
        {
            printf(",");
        }        
    }
    // printf("\b");
}
int main()
{
    int arr[]={12,55,24,4,5,6,6,3,45,32,4,5,22,34,78,7,74432,45};
    int len=sizeof(arr)/sizeof(int);
    printf("the length of array is %d \n",len);
    sort(len,arr);
    printArray(len,arr);

    return 0;
}