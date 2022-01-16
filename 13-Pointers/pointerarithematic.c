#include <stdio.h>
int main()
{
    int m = 5, n = 10, o = 0;

    int *p1;
    int *p2;
    int *p3;

    p1 = &m;    //printing the address of m
    p2 = &n;    //printing the address of n

    printf("p1 = %d\n", p1);
    printf("p2 = %d\n", p2);

    o = *p1+*p2;
    printf("*p1+*p2 = %d\n", o);//point 1

    p3 = p1-p2;
    printf("p1 - p2 = %d\n", p3); //point 2

    p1++;
    printf("p1++ = %d\n", p1); //point 3

    p2--;
    printf("p2-- = %d\n", p2); //point 4

    //Below line will give ERROR
    printf("p1+p2 = %d\n", p1+p2); //point 5

    return 0;
}

p1 = 2680016
p2 = 2680012
*p1+*p2 = 15
p1-p2 = 1
p1++ = 2680020
p2-- = 2680008

Explanation of the above program:
Point 1: Here, * means 'value at the given address'. Thus, it adds the value of m and n which is 15.
Point 2: It subtracts the addresses of the two variables and then divides it by the size of the pointer datatype (here integer, which has size of 4 bytes) which gives us the number of elements of integer data type that can be stored within it.
Point 3: It increments the address stored by the pointer by the size of its datatype(here 4).
Point 4: It decrements the address stored by the pointer by the size of its datatype(here 4).
Point 5: Addition of two pointers is not allowed.