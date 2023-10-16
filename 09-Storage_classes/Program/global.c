#include<stdio.h>
void america();
int modi=56;//global variable

int main()
{    //india
    printf("modi ji is known as %d in india \n",modi);
    modi=57;
    america();
    return 0;
}
void america()
{
    printf("modi ji is known as %d in america \n",modi);
}