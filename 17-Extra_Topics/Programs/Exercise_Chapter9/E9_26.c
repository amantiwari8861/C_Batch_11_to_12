/*E9.26*/
#include<stdio.h>
int main(void)
{	
	int arr[3][4][5];	
	printf("%p\t",arr); 			
	printf("%p\t",arr[0]); 		
	printf("%p\t",arr[0][0]); 		
	printf("%p\n",&arr[0][0][0]);		
	printf("%u\t",sizeof(arr)); 		
	printf("%u\t",sizeof(arr[0])); 	
	printf("%u\t",sizeof(arr[0][0])); 	
	printf("%u\n",sizeof(arr[0][0][0])); 	
	return 0;
}