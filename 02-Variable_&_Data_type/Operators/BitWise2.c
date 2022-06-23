#include<stdio.h>
int main()
{
    //Bitwise (Binary) Operator : &, |, ^, ~ ,<<, >>
    int num1,num2,result;
    printf("Enter the 2 numbers :\n");
    scanf("%d%d",&num1,&num2); //let 60 13

/*     // Bitwise AND (&)
    result = num1 & num2;//   60 & 13 = 00111100 & 00001101 = 00001100  -> 12 Ans.
    printf("Bitwise AND : %d\n",result); */

    // Bitwise OR (|)
    // result = num1 | num2;//   60 & 13 = 00111100 & 00001101 = 00111101  -> 61 Ans.
    // printf("Bitwise OR : %d\n",result);

    // // Bitwise XOR (^)
    // result = num1 ^ num2;//   60 ^ 13 = 00111100 ^ 00001101 = 00110001  -> 49 Ans.
    // printf("Bitwise XOR : %d\n",result);

    // Bitwise NOT (~)
    // result = ~num1;//   ~60 = ~00111100 = 11000011  -> expected 197 but Ans. -61 
    // 2's complement of 60(00111100) -> 00111101 -> -61 Ans.
    // printf("Bitwise NOT : %d\n",result);

    //    case 2 :  17 -> 00010001
    //             ~17 -> 11101110 -> 238 Wrong ans.

    // original bit       00010001
    // 2's complement           +1
    //                    00010010 -> 18 -> -18 ans.
    // note: 1+1 =0 and carry is 1
    // printf("~17 %d \n", ~17);


    //Left shift (<<)
   printf("Left shift : %d\n",num1<<1); // 60 << 1 => 60 *2  = 120 ans.
   printf("Left shift : %d\n",num1<<2); // 60 << 2 => 60 *2*2 = 240 ans.
   printf("Left shift : %d\n",num1<<3); // 60 << 3 => 60 *2*2*2 = 480 ans.

   //Right shift (>>)
    printf("Right shift : %d\n",num1>>1); // 60 >> 1 =60 /2= 30 ans.
    printf("Right shift : %d\n",num1>>2); // 60 >> 2 =60/2/2 = 15 ans.
    printf("Right shift : %d\n",num1>>3); // 60 >> 3 =60/2/2/2 = 7 ans.

    return 0;
}
