#include<stdio.h>
int main()
{
    int arr[5]={56,45,23,112,78};

    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[4-i]=arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf(" %d ",arr2[i]);
    }
    
        
    return 0;
}
