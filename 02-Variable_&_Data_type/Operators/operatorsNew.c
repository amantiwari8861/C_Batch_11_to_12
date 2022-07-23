#include<stdio.h>
int main(){
	//2. binary operators : in which two operands are required
		//b.relational operators :  < , > ,<=  ,>= , ==(to check equality) , !=(to check inequality)
	//true = 1 and false = 0 
	int num1,num2,result;
	printf("enter 2 values \n"); 
	scanf("%d %d",&num1,&num2);
	
	// result= num1 < num2 ; // 10 < 5  -> false -> (0)
	// result= num1 < num2 ; // 67 < 98  -> true -> (1)
	// result= num1 > num2 ; // 20 > 30  -> false -> (0)
	//result= num1 < num2 ; // 20 < 30  -> true -> (1)
	result= num1 <= num2 ; // 20 <= 20  -> true -> (1)
	// result= num1 >= num2 ; // 50 >= 30  -> true -> (1)
	// result= num1 == num2 ; // 20 == 20  -> true -> (1)
	// result= num1 != num2 ; // 20 != 20  -> false -> (0)
	printf("the result is %d \n",result);

	return 0;
}