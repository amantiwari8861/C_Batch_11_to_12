#include<stdio.h>
int main()
{
    // Bitwise NOT (~)

    // int num1=60;
    // result = ~num1;//   ~60 = ~00111100 = 11000011  -> expected 197 but Ans. -61 
    // 2's complement of 60(00111100) -> 00111101 -> -61 Ans.
    // printf("~60 : %d\n",result);

    //    case 2 :  17 -> 00010001
    //             ~17 -> 11101110 -> 238 Wrong ans.

    // original bit       00010001
    // 2's complement           +1
    //                    00010010 -> 18 -> -18 ans.
    // note: 1+1 =0 and carry is 1

    // printf("~17 %d \n", ~17);

    return 0;
}
