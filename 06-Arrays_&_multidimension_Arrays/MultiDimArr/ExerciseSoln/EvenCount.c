#include<stdio.h>
int main()
{
    
    // int arr[]={10,34,78,89,43,689,32};
    int arr2[]={10,34,78,89,43,689,32,78,35,45,8,54,12,56};

    int size= sizeof(arr2)/sizeof(int);//  56/4 => 14

    printf(" the size of array is %d \n",size);
    int eCount,oCount;
    eCount=oCount=0;

    for (int i = 0; i < size; i++)
    {
        if(arr2[i]%2 == 0)
        {
            eCount++;
        }
        else
        {
            oCount++;
        }
    }
    printf(" %d odd %d even elements in array \n",oCount,eCount);
   return 0;
}
