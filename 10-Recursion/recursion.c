#include<stdio.h>
void add()
{
    static int count=0;
    printf("in add function at %d \n",++count);
    if (count==5)
    {
        return ;
        // break; //error
    }
    add();  
}
int main()
{
    //when a function call it itself it is called recursion
    add();
    printf("work done !!");
    return 0;
}