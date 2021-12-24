/* 7. Write a C program to accept the height of a person in centimeter
 and categorize the person according to their height. */

 #include<stdio.h>

 int main()
 {
   int height;
   printf("Enter the height in centimeters = ");
   scanf("%d",&height);

   if (height>=165)
   {
      printf("The person is Tall.");
   }
   else
   {
       if (height>=150)
       {
           printf("The person is average height.");
       }
       else
       {
        printf("The person is Dwarf.");
       }
       
   }
   
     return 0;
 }
 