// C Pointers and Strings with Examples
// A string is an array of char objects, ending with a null character '\ 0'. We can manipulate strings using pointers. This pointer in C example explains this section

#include <stdio.h>
#include <string.h>
int main()
{
char str[]="Hello Aman!";
char *p;
p=str;
printf("First character is:%c\n",*p);
p =p+1;
printf("Next character is:%c\n",*p);
printf("Printing all the characters in a string\n");
p=str;  //reset the pointer
for(int i=0;i<strlen(str);i++)
{
printf("%c\n",*p);
p++;
}
return 0;
}