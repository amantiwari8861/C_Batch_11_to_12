/*E5_19*/
#include<stdio.h>
int main(void)
{
	int x=30,y=5,z=10;
	switch(x)
	{
		case 10:
			z++;	
			break;
		case 20:
			z--;
			break;
       	case 30:
			switch(y)
			{
				case 2:
					z=z+3;
					break;
				case 4: 
				case 5: 
					z=z+10;
					break;
				default:
					z=z-2;
			}
			break;
		default:
			z=0;
	}
	printf("%d\n",z);
	return 0;
}
/*
int main(void)
{
	int x=30,y=5,z=10;
	if(x==10)
		z++;
	else if(x==20)
		z--;
	else if(x==30)
	{
		if(y==2)
			z=z+3;
		else if(y==4 || y==5)
			z=z+10;
		else
			z=z-2;
	}
	else
		z=0;
	printf("%d\n",z);
	return 0;
}
*/