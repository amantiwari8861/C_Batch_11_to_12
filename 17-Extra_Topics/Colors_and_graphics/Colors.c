// #include<stdio.h>
// #include<windows.h>
// int main()
// {
    
//     // printf("Good Morning!!\n");
//     // system("color 0d");
//     // printf("Good Morning!!\n");

//     return 0;
// }
#include <stdio.h>
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_BGCOLOR_RED   "\x1b[41m"
#define ANSI_BGCOLOR_GREEN   "\x1b[42m"

int main () 
{
//   printf(ANSI_BGCOLOR_GREEN);
//   printf(ANSI_COLOR_RED    "This text is RED!"     ANSI_COLOR_RESET "\n");
//   printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
//   printf("normal color\n");
//   printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
//   printf(ANSI_COLOR_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
//   printf(ANSI_COLOR_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
//   printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
//   printf(ANSI_COLOR_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");


    printf("\x1b[107m \x1b[95m Hello world!!! \x1b[0m");

  return 0;
}


/*
    FG  BG
    30 	40 	Black 	       
    31 	41 	Red 	        
    32 	42 	Green 	       
    33 	43 	Yellow 	      
    34 	44 	Blue 	        
    35 	45 	Magenta 	    
    36 	46 	Cyan 	        
    37 	47 	White 	       
    90 	100 Bright (Gray) 
    91 	101 Bright Red 	  
    92 	102 Bright Green 	
    93 	103 Bright Yellow 
    94 	104 Bright Blue 	
    95 	105 Bright Magenta
    96 	106 Bright Cyan 	
    97 	107 Bright White 	
*/