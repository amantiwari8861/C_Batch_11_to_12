#include<stdio.h>
int main()
{
    int numbers[]={12,56,55,66,67,69,43,35,98,34,43,56,68,5,6,991};
    int len=sizeof(numbers)/sizeof(int);
    printf("total elements is %d \n",len);

    int key,isFound=0;
    printf("Enter key to search:");
    scanf("%d",&key);

    for (int i = 0; i < len; i++)
    {
        if (numbers[i]==key)
        {
            printf("found at position %d \n",i);
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
        printf("Not found in array !");
    }
    


    return 0;
}
