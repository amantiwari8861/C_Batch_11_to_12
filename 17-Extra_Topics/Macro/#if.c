#include <stdio.h>
#define WINDOWS 1

int main()
{
   printf("this is a great ");

   #if WINDOWS
   printf("Windows ");
   #endif

   printf("resource.\n");

   return 0;
}

/* if and #if are different things with different purposes.
If you use the if statement, the condition is evaluated
 at runtime, and the code for both branches exists
  within the compiled program. The condition can be 
  based on runtime information, such as the state of a
   variable. if is for standard flow control in a program.

If you use the preprocessor's #if, the condition is
 evaluated at compile-time (originally this was before 
 compile-time, but these days the preprocessor is usually 
 part of the compiler), and the code for the false branch 
 is not included in the compiled program. The condition 
 can only be based on compile-time information (such as
  #define constants and the like). #if is for having 
  different code for different compile-time environments
   (for instance, different code for compiling on Windows 
   vs. *nix, that sort of thing). */