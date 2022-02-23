#include<stdio.h>
int main()
{
	int result;
	//logical operators :  && (AND) , || (or) , ! (not )
	//true = 1 and false = 0 
	
	// result= (10 > 20 ) && (20 < 30 ); // 0 && 1  -> 0
	// result= (30 > 20 ) && (50 < 30 ); // 1 && 0  -> 0
	// result= (30 > 20 ) && (50 > 30 ); // 1 && 1  -> 1
	result= (30 > 20 ) || (50 < 30 ); // 1 && 0  -> 1
	//result= !( 10 < 20 ); // !(1) -> 0
	printf("the result is %d \n",result);

	//assignment operators ->    = , += ,-= , *= ,/=,%= etc.
	int sum=20;
	// sum=sum+30; //sum=50;
	//or
	sum+=30; //sum =50
	printf("the sum is %d \n",sum);
	return 0;
}
