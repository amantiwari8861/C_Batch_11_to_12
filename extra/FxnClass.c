#include<stdio.h>
void greet();//declaration

int main()  //function 
{
    printf("hii i am main fxn\n");
    greet();//calling
    greet();//calling
    greet();//calling
    greet();//calling
    return 0;
}
void greet() //body
{
    printf("Good afternoon\n");
}