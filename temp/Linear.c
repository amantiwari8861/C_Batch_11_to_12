// 3.take 10 no. from user and take a number to search from array and find the index of that number.(linear search)
#include<stdio.h>
int main()
{
    int arr[]={60,36,33,98,55,49,81,98,3,72};
    int key=98899889;
    int isFound=0;

    for (int i = 0; i < 9; i++)
    {
        if (key==arr[i])
        {
            printf("found at index %d \n",i);
            isFound=1;
            break;
        }
        // else
        // {
        //     printf("not found at position %d \n",i);
        // }
    }
    if (isFound==0)
    {
        printf("%d not found in array \n",key);
    }
    return 0;
}
