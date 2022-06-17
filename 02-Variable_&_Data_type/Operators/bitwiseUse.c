#include <stdio.h>
int main()
{
  // ! (logical not)
  //  ~ (bitwise not)
  // printf("%d | %d = %d\n",10,5,10|5); //15
  // printf("%d & %d = %d\n",12,5,12&5); //4
  // printf("~%d =  %d \n",10,~10); //-11
  // use 2's complement to get the ~ of a number (1 + 1 =1 and carry 1 )
  // e.g 10 -> 000....1010
  // -> 1's complement ->111......... 0101
  // -> 2's complement -> 000........1011 ->11
  // in 1's complement first bit is 1 then this ia -ve number  i.e -11 Ans.

  int num=10;
  printf(" left shift %d \n", num << 1); // 10*2 => 20
  printf(" left shift %d \n", num << 2); // 10*2*2 => 40
  printf(" left shift %d \n", num << 3); // 10*2*2*2 => 80
  printf(" left shift %d \n", num << 4); // 10*2*2*2*2 => 160
  int num2 = 84;
  printf(" right shift %d \n", num2 >> 1); // 84/2 => 42
  printf(" right shift %d \n", num2 >> 2); // (84/2)/2 => 21
  printf(" right shift %d \n", num2 >> 3); // ((84/2)/2)/2 => 10.5 -> 10
  printf(" right shift %d \n", num2 >> 4); // (((84/2)/2)/2)/2 => 5

  return 0;
}
