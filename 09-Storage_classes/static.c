#include<stdio.h>
void Show()
{
    int a=10;
    static int b=10;
    printf("the value of a =%d and b=%d \n",++a,++b);
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