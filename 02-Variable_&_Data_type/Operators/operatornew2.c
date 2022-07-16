#include<stdio.h>
int main()
{
	//2. binary operators : in which two operands are required
		//b.logical operators :  && (AND) , || (or) , ! (not )
	//true = 1 and false = 0 
	
	// int result;
	// AND GATE (&&)
	// result= (10 > 20 ) && (20 < 30 ); // 0 && 1  -> 0
	// result= (30 > 20 ) && (50 < 30 ); // 1 && 0  -> 0
	// result= (30 > 20 ) && (50 > 30 ); // 1 && 1  -> 1
	
	//OR GATE (||)
	// result= (30 > 20 ) || (50 < 30 ); // 1 || 0  -> 1

	//NOT GATE (!)
	// result= !( 10 > 20 ); // !(0) -> 1
	// printf("the result is %d \n",result);

	//c.assignment operators ->    = , += ,-= , *= ,/=,%= etc.
	int sum=20;
	// sum=sum+30; 
	//or
	sum+=30; //sum =50
	printf("the sum is %d \n",sum);
	// int multi=6;
	// multi = multi*10;  
	// multi *= 10;
	// printf("the multiply is %d \n",multi);

	return 0;
}
