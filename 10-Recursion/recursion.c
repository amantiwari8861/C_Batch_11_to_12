#include<stdio.h>
int add()
{
    static int count=0;
    printf("in add function at %d \n",++count);
    if (count==5)
    {
        return 2;
        // break; //error
    }
    add();  
}
int main()
{
    //when a function call it itself it is called recursion
    add();
    return 0;
}