#include<stdio.h>
int main()
{
    int arr[10],counteven=0,countodd=0;
    printf("enter the element\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            ++counteven;
        }
        else
        {
            ++countodd;
        }
    }
    printf("the evens are %d and odds are %d \n",counteven,countodd);
    return 0;
}
