#include<stdio.h>
// #define Max 20  //bad programming practice
#define MAX 20

int main()
{
   int arr[MAX];
   int arrsize=(sizeof(arr))/sizeof(int); //4*20 -> 80 /4 => 20
   printf(" MAX =%d and array's size is %d  \n",MAX,arrsize);

    return 0;
}