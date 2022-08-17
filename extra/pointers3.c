#include<stdio.h>
int main()
{
    int num=50;

    printf(" value of num=%d \n",num);
    printf(" address of num=%d \n",&num);

    // &(Ampersand) means address of

    int *ptr;
    ptr=&num;//storing address of num

    *ptr=79;//Aistrik(*) means value at address

    printf(" num=%d \n",num);// 79 ??

    printf("the value in ptr is %d \n",ptr);
    printf("the address of ptr is %d \n",&ptr);
    
    int **dptr;

    dptr=&ptr;
    
    printf("the value in dptr is %d \n",dptr);
    printf("the address of dptr is %d \n",&dptr);

    // value at address dptr ???

    printf("the value at address dptr is %d \n",*dptr);
    printf("the value at address *dptr is %d \n",**dptr);



    return 0;
}
