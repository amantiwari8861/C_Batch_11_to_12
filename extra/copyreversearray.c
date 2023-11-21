#include<stdio.h>
int main()
{
    int first[]={100,23,45,677,88,89,33,66,78,89};

    int second[10];// 89,78,...100

    for(int i=9;i>=0;i--)
    {
        second[9-i]=first[i];
    }
    printf("the second array is :");
    for(int i=0;i<10;i++)
    {
        printf("%d,",second[i]);
    }
    return 0;
}