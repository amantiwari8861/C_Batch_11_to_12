#include<stdio.h>
int main()
{
    //Bitwise operators are used to perform bitwise operations on variables.
    //eg: &, |, ^, ~, <<, >>

    //Bitwise AND
    // 16 -> 00010000
    // 19 -> 00010011
    // 16 & 19 -> 00010000 -> 16 ans.

    printf("16 & 19 %d \n", 16 & 19);
    //Bitwise OR
    // 16 -> 00010000
    // 19 -> 00010011
    // 16 | 19 -> 00010011 -> 19 ans.

    printf("16 | 19 %d \n", 16 | 19);
    //Bitwise XOR
    // 16 -> 00010000
    // 19 -> 00010011
    // 16 ^ 19 ->  00000011 -> 3 ans.
    printf("16 ^ 19 %d \n", 16 ^ 19);

    //Bitwise NOT
    // case 1:
    // 16 -> 00010000
    // ~16-> 11101111 -> 1+2+4+8+32+64+128 = 239 ans.
    printf("~16 %d \n", ~16); //  change in output.(-17)

    // 1's complement  00010000
    // 2's complement        +1
    //                 00010001 -> 17 -> -17 ans.
    //(it's a -ve no. bcz not of 16's first bit is 1)

    // case 2 :  17 -> 00010001
        //       ~17-> 11101110 -> 238 ans.
     // 1's complement 00010001
     // 2's complement       +1
    //                 00010010 -> 18 -> -18 ans.
    // note: 1+1 =0 and carry is 1
    printf("~17 %d \n", ~17);

    //Left shift
    // 10 -> 00001010
    // 10<<3 -> 01010000 we removed 3 bits from left side and added 3 0's from right side.
    // 01010000 -> 80 ans.
    printf("10<<3 %d \n", 10<<3);

    //Right shift
    // 10 -> 00001010
    // 10>>3 -> 00000001 we removed 3 bits from right side and added 3 0's from left side.
    // 00000001 -> 1 ans.
    printf("10>>3 %d \n", 10>>3);

    return 0;
}
