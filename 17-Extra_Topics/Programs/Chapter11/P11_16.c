/*P11.16 Program to compare the memory allocated for a union and structure variable*/ 
#include<stdio.h>
struct stag
{
    char c;
	int i;
	float f;
};
union utag
{
    char c;
	int i;
	float f;
};
int main(void)
{
	union  utag uvar;
	struct stag svar;
	printf("Size of svar = %u\n", sizeof(svar));
	printf("Address of svar : %p\t", &svar);
	printf("Address of members : %p  %p  %p\n", &svar.c, &svar.i, &svar.f);
	printf("Size of uvar = %u\n", sizeof(uvar) );
	printf("Address of uvar : %p\t", &uvar);
	printf("Address of  members : %p  %p  %p\n", &uvar.c, &uvar.i, &uvar.f);
	return 0;
}