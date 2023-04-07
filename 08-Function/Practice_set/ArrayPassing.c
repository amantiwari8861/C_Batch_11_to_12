#include<stdio.h>
int add(int,int[]);
int multiply(int[],int);
int main()
{
    int size,arr[100];
    char op;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the operation you want to perform: ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("The sum of the array is: %d",add(size,arr));
            break;
        case '*':
            printf("The product of the array is: %d",multiply(arr,size));
            break;
        default:
            printf("Invalid operation");
    }
    return 0;
}
int add(int size,int arr[size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum =sum+ arr[i];
    }
    return sum;
}
int multiply(int arr[],int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product =product* arr[i];
    }
    return product;
}
void print2D(int arr2[][3],int size) //we can't let the second dimension empty
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}
void bubbleSort(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i-1; j++)
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
//h.w print 2D array using function