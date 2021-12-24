/*  5. Write a C program to read the age of a candidate and determine 
whether it is eligible for casting his/her own vote. */

#include<stdio.h>

int main()
{
   int age;

   printf("Enter the age = ");
   scanf("%d",&age);

   if (age>=18)
   {
       printf("Congratulation! You are eligible for casting your vote.");
   }
   else
   {
       printf("Sorry! You are not eligible for casting your vote.");
   }
   
    return 0;
}
