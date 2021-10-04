#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);  // & represents address of 
    printf("the value in variable num is %d at address %d \n",num,&num);
    // syntax:  datatype *pointername;
    int *ptr1; //pointer stores the address of another variable
    //this pointer can store the address of int datatype variable
    // char *ptr2;
    ptr1=&num;
    // * represents the value at address
    printf("the value in pointer ptr1 is %d \n",ptr1);
    printf("the value at address in pointer ptr1 is %d \n",*ptr1);
    printf("the address of ptr1 pointer is %d \n",&ptr1);
    // int *ptr3=NULL; // null pointer
    int **dptr;
    dptr=&ptr1;
    printf("the value in double pointer is %d \n",dptr);
    printf("the value at address dptr %d \n",*dptr);
    printf("the value at address of variable in dptr %d \n",**dptr);
    printf("the address of dptr %d \n",&dptr);
    return 0;
}
