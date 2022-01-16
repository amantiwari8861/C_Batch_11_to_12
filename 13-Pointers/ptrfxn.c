Pointer to functions
It is possible to declare a pointer pointing to a function which can then be used as an argument in another function. A pointer to a function is declared as follows,

type (*pointer-name)(parameter);
Here is an example :

int (*sum)();   //legal declaration of pointer to function
int *sum();     //This is not a declaration of pointer to function
A function pointer can point to a specific function when it is assigned the name of that function.

int sum(int, int);
int (*s)(int, int);
s = sum;
Here s is a pointer to a function sum. Now sum can be called using function pointer s along with providing the required argument values.

s (10, 20);
Example of Pointer to Function
#include <stdio.h>

int sum(int x, int y)
{
    return x+y;
}

int main( )
{
    int (*fp)(int, int);
    fp = sum;
    int s = fp(10, 15);
    printf("Sum is %d", s);

    return 0;
}

25

Complicated Function Pointer example
You will find a lot of complex function pointer examples around, lets see one such example and try to understand it.

void (*foo) (int);
It appears complex but it is very simple. In this case (foo) is a pointer to the function, whose argument is of int type and return type is void*.
