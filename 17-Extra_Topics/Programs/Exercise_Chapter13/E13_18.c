/*E13_18*/
#include<stdio.h>
#define PRINT1(message)  printf(message);
#define PRINT2(message)  printf("message");
#define PRINT3(message)  printf(#message);
int main(void)
{
	PRINT1("If we rest, we rust.\n")
	PRINT2("Attack life, its going to kill you anyways.\n")
	PRINT3("Well done is better than well said.\n")
	return 0;
}