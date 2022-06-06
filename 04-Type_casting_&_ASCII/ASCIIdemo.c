#include<stdio.h>
int main()
{
    //ASCII -> american standard code for information interchange 
    
    //A a 9 ] @ etc. these all are characters
    //every character has it's ASCII value (in decimal )
    // e.g   A = 65  B=66 ........... Z=90  (65 + 26 => 91 - 1 => 90)
    // e.g   a = 97  b=98 ........... z=122  (97 + 26 => 123 - 1 => 122)
    // e.g   0 = 48  1=49 ........... 9=57   (48+10 => 58 -1 => 57)

    //casting : (conversion of one data type into another )
    //implicit casting : compiler automatic do the casting
    //explicit casting : we have to do the casting manually
    char ch='A';
    // int num=ch;//implicit casting  // here compiler converted char into decimal(int)
    int num=(int)ch;//explicit casting  // here we converted char into decimal(int)
    // printf("the character is %c and it's ascii value is %d \n",ch,ch);
    printf("the character is %c and it's ascii value is %d \n",ch,num);

    // int num2=56;
    // float fnum=num2; //upward casting (type promotion) (we converted from int to float)
    // printf(" fnum = %f \n",fnum);

    // float num2=56.678;
    // int fnum=num2; //downward casting  (we converted from float to int)
    //in downward casting we loss some information
    // printf(" fnum = %d \n",fnum);
    return 0;
}