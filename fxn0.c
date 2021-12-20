#include<stdio.h>
void add();
int main()
{
    printf("before calling in main \n");
    // int res=50;
    int res=add();
    printf("after calling in main %d\n",res);
    return 0;
}
void add(/*argument or parameter*/)
{   
    printf("hii i am adding something\n");
    return 1000;
} 