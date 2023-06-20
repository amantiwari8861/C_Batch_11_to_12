/*E5_49*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,num;
	
	for(num=2; num<=99; num++)
	{
        for(i=2; i<=sqrt(num); i++)	
			if(num%i == 0)
				break;
		if(i>sqrt(num))
			printf("%d\t",num);
	}
	return 0;
}