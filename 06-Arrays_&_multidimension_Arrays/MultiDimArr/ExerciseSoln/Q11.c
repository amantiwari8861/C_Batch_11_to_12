#include<stdio.h>
int main()
{
    int arr1[]={10,34,5,6,6,7,77,89,8,87,6,5};
    int arr2[]={89,8,87,6,5,44,53,54,55,4};

    int len1=sizeof(arr1)/sizeof(int),len2=sizeof(arr2)/sizeof(int);
    printf("size of array 1 : %d \n",len1);
    printf("size of array 2 : %d \n",len2);


    for (int i = 0; i < len1; i++)
    {
        printf("  arr1[%d] = %d \n",i,arr1[i]);
        for (int j = 0; j < len2; j++)
        {
            printf("\t arr2[%d] = %d \n",j,arr2[j]);
            if (arr1[i]==arr2[j])
            {
                printf("%d is common\n",arr1[i]);
            }          
        }
    }
    




    return 0;
}
