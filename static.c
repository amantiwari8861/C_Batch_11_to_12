#include<stdio.h>
void Show()
{
    int a=0;
    static int b=0;
    printf("the value of a =%d abd b=%d \n",++a,++b);
}
int main()
{
    Show();
    Show();
    Show();
    Show();
    Show();
    return 0;
}