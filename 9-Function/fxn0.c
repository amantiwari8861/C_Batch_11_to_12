#include<stdio.h>
void add();
int main()
{
    printf("before calling in main \n");
    add();
    printf("after calling in main \n");
    return 0;
}
void add(/*argument or parameter*/)
{   
    printf("hii i am adding something\n");
} 