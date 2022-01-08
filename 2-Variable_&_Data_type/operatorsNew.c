#include<stdio.h>
int main()
{
	int num1,num2,result;
	//relational operators :  < , > ,<=  ,>= 
	//true = 1 and false = 0 
	printf("enter 2 values \n"); 
	scanf("%d %d",&num1,&num2);
	
	//result= num1 > num2 ; // 10 > 5  -> true -> (1)
	//result= num1 > num2 ; // 20 > 30  -> false -> (0)
	//result= num1 < num2 ; // 20 < 30  -> true -> (1)
	//result= num1 <= num2 ; // 20 <= 20  -> true -> (1)
	result= num1 >= num2 ; // 50 >= 30  -> true -> (1)
	
	printf("the result is %d \n",result);
	
	return 0;
}
