/*E5_45*/
#include<stdio.h>

/*(i)*/

int main(void)
{
	int i,j,k;
    for(i=1; i<8; i++)
    {
        if(i!=3 && i!=5)
        {
			for(j=1;j<=i;j++)
			{
				for(k=j; k>0; k--)
					printf("%d ",k);
				printf("\n");
			}
			printf("\n");
		} 
	}
	return 0;
}

/*(i) with continue*/
/*
int main(void)
{
	int i,j,k;
	for(i=1; i<8; i++)
	{
		if(i==3 || i==5)
			continue;
		for(j=1;j<=i;j++)
		{
			for(k=j; k>0; k--)
	   			printf("%d ",k);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
*/


/*(ii)*/
/*
int main(void)
{
	int i,j,x;
	for(i=1; i<10; i++)
    {
		x=i+5;
		if(i%2==0)
		{
			x+=i;
			for(j=i; j>0; j--)
			{
				if(i==j)
					x++;
				else
					x--;
				printf("%d ",x);
			}
			printf("\n");
       }
       else
			printf("%d\n",x);
     }
	 return 0;
}
*/
/*(ii) with continue*/
/*
int main(void)
{
	int i,j,x;
	for(i=1; i<10; i++)
    { 
		x=i+5;
		if(i%2!=0)
		{
			printf("%d\n",x);
			continue;
		}
		x+=i;
		for(j=i; j>0; j--)
		{
			if(i==j)
				x++;
			else
				x--;
			printf("%d ",x);
		}
        printf("\n");
     }
	 return 0;
}
*/