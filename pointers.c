#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);  // & represents address of 
    printf("the value in variable num is %d at address %d \n",num,&num);
    // syntax:  datatype *pointername;
    int *ptr; //pointer stores the address of another variable
    //this pointer can store the address of int datatype variable
    // char *ptr2;
    ptr=&num;
    // * represents the value at address
    printf("the value in pointer ptr is %d \n",ptr); //6684188
    printf("the address of ptr pointer is %d \n",&ptr);//6684168
    printf("the value at address in pointer ptr is %d \n",*ptr);
    // int *ptr3=NULL; // null pointer
    int **dptr;
    dptr=&ptr;
    printf("the value in double pointer is %d \n",dptr);
    printf("the value at address dptr %d \n",*dptr);
    printf("the value at address of variable in dptr %d \n",**dptr);
    printf("the address of dptr %d \n",&dptr);
    return 0;
}
