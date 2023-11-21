#include<stdio.h>
int main()
{
    // int numbers[]={10,35,67,7,8,8,8,8,8833,678,98};
    int numbers[10];
    printf("enter 10 numbers \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("The Numbers are :");
    for(int i=0;i<10;i++)
    {
        printf("%d,",numbers[i]);
    }
    int key,flag=0;
    printf("\nenter the key :");
    scanf("%d",&key);

    for(int i=0;i<10;i++)
    {
        if(numbers[i]==key)
        {
            printf("the %d is found at %d \n",key,i);
            flag=1;
            // break;
        }
    }
    if(flag==0)
    {
        printf("the %d is not found in array \n",key); 
    }
    return 0;
}