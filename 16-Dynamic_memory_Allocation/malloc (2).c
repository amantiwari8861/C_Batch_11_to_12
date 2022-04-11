#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr2,i;
    ptr2=(int*)malloc(4*sizeof(int)); //4*4 =16bytes
    if(ptr2==NULL)
    {
        printf("unable to allocate memory ");
        exit(0);
    }
    // ptr=5676; //treats as a address
    // ptr=&var; //treats as a address
    //*ptr=50; //treats as value 
    // *ptr2=50; // *(ptr2+0)
    printf("%d \n",ptr2);
    for(i=0;i<4;i++)
    {
        // scanf("%d",&*(ptr2+i));
        scanf("%d",ptr2+i);
    }
    //free(ptr2);
    // ptr2=(int*)realloc(5,*sizeof(int));
 /*   for(i=0;i<5;i++)
    {
        // scanf("%d",&*(ptr2+i));
        scanf("%d",ptr2+i);
    }*/
    for(i=0;i<4;i++)
    {
        printf("the value at array ptr2\'s %dth position is %d \n",i,*(ptr2+i));
    }
    free(ptr2);
    return 0;
}