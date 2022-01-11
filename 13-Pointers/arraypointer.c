#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr;
    // ptr=&arr;
    // ptr=arr;
    // ptr=&arr[4];
    printf("the address of %d is arr[0] \n",&arr[0]);
    printf("the address in ptr is %d  \n",ptr);

    for (int i = 0; i < 5; i++)
    {
        printf("the value at %d position is %d \n",i,*ptr);
        // ptr++;
        ptr--;
    }
    


    return 0;
}
