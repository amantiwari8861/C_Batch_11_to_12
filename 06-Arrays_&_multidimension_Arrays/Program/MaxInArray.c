#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("enter %d values in array :\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    //10 30 3 80 5
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    printf("the maximum no. is %d \n",max);
    
    return 0;
}
