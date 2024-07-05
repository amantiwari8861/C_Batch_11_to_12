#include<stdio.h>
void myFunction(int);
int modi=56;
const float PI=3.14;
int main()
{
    // int a=10; //automatic local variable 
    auto int a=10; //automatic local variable 
    myFunction(a);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",i);
    // }
    // printf("%d",i);
    printf("modi=%d in main \n",modi);
    return 0;
}
void myFunction(int b)
{
    // printf("a=%d \n",a);
    // printf("a=%d \n",b);
    printf("modi=%d in myFunction \n",modi);
    modi=15;
}