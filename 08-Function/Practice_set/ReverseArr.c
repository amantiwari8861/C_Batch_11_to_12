#include<stdio.h>
void reverse(int[],int);
void copyArr(int[],int[]);
int main()
{
    int arr[]={10,20,30,40,50};
    int len=5;
    int newarray[5];
    // reverse(arr,len);
    copyArr(arr,newarray);
    printf("the new array is :");
    for (int i = 0; i < 5; i++)
        printf("%d ",newarray[i]);
    return 0;
}
void reverse(int numarr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ",numarr[4-i]);
    }
}
void copyArr(int source[],int destination[])
{
    for (int i = 0; i < 5; i++)
    {
        // destination[i]=source[i];
        destination[4-i]=source[i];
    }
}