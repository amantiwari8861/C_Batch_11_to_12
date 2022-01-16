// C Pointers & Arrays with Examples
// Traditionally, we access the array elements using its index,
// but this method can be eliminated by using pointers.
// Pointers make it easy to access each array element.
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};   //array initialization
    int *p;   //pointer declaration
    /*the ptr points to the first element of the array*/

    p=a; /*We can also type simply ptr==&a[0] */
    
    printf("Printing the array elements using pointer\n");
    for(int i=0;i<5;i++)    //loop for traversing array elements
    {
        printf("\n%x",*p);  //printing array elements
        p++;    //incrementing to the next element, you can also write p=p+1
    }
    return 0;
}
/* 
Output
1
2
3
4
5 */
/* 
#include <stdio.h>
int main()
{
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;     // same as int*p = &a[0]
    for (i = 0; i < 5; i++)
    {
        printf("%d", *p);
        p++;
    }
    
    return 0;
} */