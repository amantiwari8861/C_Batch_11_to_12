/*E5_18*/
#include<stdio.h>
int main(void)
{
	int x,y;
	
	x=3,y=4;
	
	if(x==1)
		y=x+1;
	else if(x==2)
	{
		y=0;
		x=0;
	}
	else if(x==3 || x==4 || x==5)
		y++;
	else if(x==6)
		y+=4;
	else
		y--;
	printf("%d %d\n", x,y);

	x=6,y=4;

	if(x==1)			
		y=x+1;
	else if(x==2 || x==3|| x==4)
		y++;
	else if(x==5)
		y--;
	else if(x==6)
		y=0;
	printf("%d %d\n", x,y);
	return 0;
}

/*
int main(void)
{
	int x,y;
		
	x=3,y=4;
	switch(x)
	{
		case 1:
			y=x+1;
			break;
		case 2:
			y=0;
			x=0;
			break;
		case 3:
		case 4:
		case 5:
			y++;
			break;
		case 6:
			y+=4;
			break;
		default:
			y--;
	}
	printf("%d %d\n", x,y);

	x=6,y=4;
	switch(x)
	{
		case 1:
			y=x+1;
			break;
		case 2:
		case 3:
		case 4:
			y++;	
			break;
		case 5:
			y--;
			break;
		case 6:
			y=0;
	}
	printf("%d %d\n", x,y);
	return 0;
}
*/
