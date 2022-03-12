#include <stdio.h>
#include<string.h>
union Data {
   int id;//4 bytes 
   float salary;// 4 bytes
   char name[20]; //20 bytes
};
int main( ) {
   union Data var,var2;// expected total 28 bytes 
   printf( "Memory size occupied by var : %d\n", sizeof(var));//20
   //but result is 20 bcz union allocates memory of maximun variable size due to memory sharing
    var2.id=101;//4 bytes
    var2.salary=9999.99;//4 bytes
    // var2.name="neha"; error same as structure
    strcpy(var2.name,"Aman");//20 bytes
   //it will give memory to last assigned variable
   //we stores total 28 bytes data in var2 but it will only store 20 bytes data
   printf( "Memory size occupied by var2 after storing: %d\n", sizeof(var2));//20
   printf("the id is %d and name is %s and salary is %0.2f \n",var2.id,var2.name,var2.salary);
    //taking garbage value of id and salary

   var.id=101;//4 bytes
   var.salary=9999.99;//4 bytes
   printf("the id is %d and name is %s and salary is %0.2f \n",var.id,var.name,var.salary);

   return 0;
}