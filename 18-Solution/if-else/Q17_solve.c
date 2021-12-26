// 17. Write a C program to check whether an alphabet is a vowel or consonant.

#include<stdio.h>

int main()
{
   char alpha;

   printf("Enter any character = ");
   scanf("%c",&alpha);

   if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
   {
       printf("%c is a vovel.",alpha);
   }
   else
   {
       printf("%c is a consonent.",alpha);
   }
   
   
    return 0;
}
