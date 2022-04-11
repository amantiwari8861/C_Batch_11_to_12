#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int arr[]={10,20,30,40};
    // int *ptrarray;
    // ptrarray=&arr;
    // int *ptrarray2=arr;
    // printf(" address of array arr is %d \n",&arr);
    // printf(" address in pointer array (ptrarray) is %d \n",ptrarray);
    // printf(" value at address in pointer array (ptrarray) is %d \n",*ptrarray);
    // printf(" address in pointer array (ptrarray2) is %d \n",ptrarray2);
    // printf(" value at address in pointer array (ptrarray2) is %d \n",*ptrarray2);
    // ptrarray2++;
    // printf(" address in pointer array (ptrarray2) is %d \n",ptrarray2);
    // printf(" value at address in pointer array (ptrarray2) is %d \n",*ptrarray2);
    // ptrarray2--;
    // printf(" address in pointer array (ptrarray2) is %d \n",ptrarray2);
    // printf(" value at address in pointer array (ptrarray2) is %d \n",*ptrarray2);

    // int *arr;
    // *(arr+0)=10;
    // *(arr+1)=20;
    // *(arr+2)=30;
    // *(arr+3)=40;

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the value in arr[%d] is : %d \n",i,*(arr+i));
    // }
    // C program to print the elements of 3-D
    // array using pointer notation
        // int arr2[2][3] = {{1, 2, 3}, {5, 7, 8}};
        int (*arr)[3];
        *(*(arr+0)+0)=10;
        *(*(arr+0)+1)=20;
        *(*(arr+0)+2)=30;
        *(*(arr+1)+0)=40;
        *(*(arr+1)+1)=50;
        *(*(arr+1)+2)=60;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                // printf("%d (%d)\t",*(*(arr2 + i)+j),(*(arr2 + i)+j)); //in case of array
                printf("%d (%d)\t",*(*(arr + i)+j),(*(arr + i)+j)); //in case of pointer
            }
            printf("\n");
        }
    return 0;
}
