#include<stdio.h>
int add(int a)
{
    if (a<=3)
    {    
        printf("in add function at %d \n",a);
        return add(a+1); 
    }
}
int main()
{
    int a=1;
    add(a);
    return 0;
}

//h.w psuedocode,reverse counting by recursion