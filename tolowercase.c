#include<stdio.h>
int main()
{
    char arr[10];
    printf("enter the name\n");
    scanf("%[^\n]s",&arr);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]<91 && arr[i]>64)
        {
            arr[i]=arr[i]+32;
        }
    }
    puts(arr);
    return 0;
}