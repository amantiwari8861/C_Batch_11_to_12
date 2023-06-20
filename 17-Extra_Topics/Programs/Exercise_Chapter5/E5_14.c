/*E5_14*/
#include<stdio.h>
int main(void)
{
	int k=10;
	switch(k)
	{
		case '5':  
		case '10':  
				k++;
				continue;
		case '15':  
		case '20':
				k--;
	}
	return 0;
}