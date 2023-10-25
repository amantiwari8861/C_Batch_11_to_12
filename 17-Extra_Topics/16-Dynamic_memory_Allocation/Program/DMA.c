#include<stdio.h>
#include<malloc.h>
int main()
{
    //Drawback of array ?
    // Array is static 

    //Dynamic memory allocation
    int *marksArr=NULL;
    int n;
    printf("enter the no. of marks :");
    scanf("%d",&n);

    marksArr=(int*)malloc(sizeof(int)*n);////by default malloc initialized with garbage value at memory locations
    // marksArr=(int*)calloc(sizeof(int),n); //by default calloc initialized with 0 at memory locations
    //Note : malloc is much faster than calloc

    printf("Enter the %d marks \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(marksArr+i));
    }
    printf("The entered marks are \n");
    for (int i = 0; i < n; i++)
    {
        printf("at %d Mark %d : %d \n",(marksArr+i),i,*(marksArr+i));
    }
    free(marksArr);
    printf("The entered marks are after free memory \n");
    for (int i = 0; i < n; i++)
    {
        printf("at %d Mark %d : %d \n",(marksArr+i),i,*(marksArr+i));
    }
    return 0;
}
