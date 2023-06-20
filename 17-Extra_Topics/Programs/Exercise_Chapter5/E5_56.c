/*E5_56*/ 
#include<stdio.h>
int main(void)
{
	int i,n,sum;
    printf("Enter n : ");
	scanf("%d",&n);
	
	sum=0;
	for(i=1; i<=n; i++)
		if(i%3==0)
            sum+=i*i*i;
	printf("%d\n",sum);

	/*using continue*/
	sum=0;
	for(i=1; i<=n; i++)
	{
		if(i%3!=0)
			continue;
        sum+=i*i*i;
	}
	printf("%d\n",sum);
	return 0;
}