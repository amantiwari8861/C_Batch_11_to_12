#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);  // & represents address of 
    printf("the value in variable num is %d at address %d \n",num,&num);//let 50,6684188
    // Pointer: it is a variable whose value is the address of another variable
    // syntax:  datatype *pointername;
    int *ptr; //pointer stores the address of another variable
    //this pointer can store the address of int datatype variable
    // char *ptr2;
    ptr=&num;
    // * represents the value at address
    printf("the value in pointer ptr is %d \n",ptr); //6684188
    printf("the value at address in pointer ptr is %d \n",*ptr);//50
    printf("the address of ptr pointer is %d \n",&ptr);//6684168

    // int *ptr3=NULL; // null pointer
    int **dptr;
    dptr=&ptr;//6684168
    printf("the value in double pointer is %d \n",dptr);//6684168
    printf("the value at address dptr %d \n",*dptr);//6684188
    printf("the value at address of variable in dptr %d \n",**dptr);//50
    return 0;
}
