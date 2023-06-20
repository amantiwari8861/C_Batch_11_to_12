/*P10.42*/
#include<stdio.h> 
int main(void)
{
	int n,num,d=0,dig[4];
	char *ones[] = {"","One","Two","Three","Four","Five","Six",                 
							"Seven","Eight","Nine","Ten"};

	char *el[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen",   
				  "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};

	char *tens[] = {"","","Twenty","Thirty","Forty","Fifty",
					"Sixty","Seventy","Eighty","Ninety"};
	printf("Enter a 4 digit number : ");
	scanf("%d",&num);
	n=num;
	do
	{
		dig[d] = n%10;
		n/=10;
		d++;
	}while(n>0);

	if(d==4)
		printf("%s Thousand", ones[dig[3]]);
	if(d>=3 && dig[2]!=0)
		printf(" %s Hundred ", ones[dig[2]]);
	if(d>=2)
	{
		if(dig[1]==0)
			printf("%s\n",ones[dig[0]]);
		else if(dig[1]==1)
			printf("%s\n",el[dig[0]]);
		else
			printf("%s %s\n",tens[dig[1]],ones[dig[0]]);
	}
	if(d==1 && num!=0)
		printf("%s\n",ones[dig[0]]);
	if(num==0)
		printf("Zero\n");
	return 0;
}