#include<stdio.h>
int main()
{
    
    // printf("   %c  ",65);

    // char d1='C';
    // int num5=(int)d1;
    // printf(" num5 = %d ",num5);


    // int  num=98;
    // char ch=(char)num;
    // printf("ch= %c ",ch);

    char ch2;
    printf("enter the character :");
    scanf("%c",&ch2);

    // int num2=ch2;   //implicit casting
    int num2=(int)ch2;  //explicit casting
    printf(" %d \n",num2);

    int num6=78.9878;
    printf(" num6 =%d \n",num6);


    float num7=96;
    printf(" num7 =%f \n",num7);

    


    // A => 65  
    // Z = 65+25 => 90
    // a => 97
    // z= 97 + 25 => 122
    // 0 -> 48
    // 9 -> 57

    return 0;
}
