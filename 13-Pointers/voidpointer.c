Void Pointer
In C programming, a void pointer is also called as a generic pointer. It does not have any standard data type. A void pointer is created by using the keyword void. It can be used to store an address of any variable.

Following program illustrates the use of a void pointer:

#include <stdio.h>
int main()
{
void *p = NULL; 	//void pointer
printf("The size of pointer is:%d\n",sizeof(p));
return 0;
}
Output:

The size of pointer is:4
