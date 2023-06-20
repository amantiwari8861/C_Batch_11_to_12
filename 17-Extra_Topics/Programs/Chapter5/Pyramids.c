/*PYRAMIDS*/

#include<stdio.h>

/*Pyramid (a)*/
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("* ");	
		printf("\n");	
	}
	return 0;
}

/*Pyramid (b)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%2d",i);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (c)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%2d",j);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (d)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%3d",i+j);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (e)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%d ",(i+j)%2==0 ? 1 : 0);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (f)*/
/*
int main(void)
{
    int i,j,n,p=1;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%3d",p++);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (g)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%2d",n+1-j);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (h)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=i; j++)
			printf("%2d",n+1-i);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (i)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1-i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
*/

/*Pyramid (j)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1-i; j++)
			printf("%2d",i);
		printf("\n");
	}
	return 0;
}
*/

/*Pyramid (k)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1-i; j++)
			printf("%2d",j);
		printf("\n");
	}
	return 0;
}
*/

/*Pyramid (l)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1-i; j++)
			printf("%2d",n+1-i);
		printf("\n");
	}
	return 0;
}
*/

/*Pyramid (m)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n+1-i; j++)
			printf("%2d",n+1-j);
		printf("\n");
	}
	return 0;
}
*/

/*Pyramid (n)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for( j=1; j<=n-i; j++)		
			printf(" ");
		for(j=1; j<=i; j++)
			printf("* ");	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (o)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=n-i; j++)		
			printf(" ");
		for(j=1; j<=i; j++)
			printf("%2d",j);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (p)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for( j=1; j<=n-i; j++)		
			printf(" ");
		for(j=1; j<=i; j++)
			printf("*");	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (q)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)  
	{
		for(j=1; j<=n-i; j++)		
			printf(" ");
		for(j=1; j<=i; j++)
			printf("%d",j);	
		printf("\n");	
	}
	return 0;
}
*/

/*Pyramid (r)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("*");
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (s)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("%d",i);
		printf("\n");		
	}
	return 0;
}
*/


/*Pyramid (t)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("%d",j);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (u)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=2*(n-i); j++)	
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("* ");
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (v)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)		
	{
		for(j=1; j<=n-i; j++)	
			printf(" ");
		p=i;
		for(j=1; j<=i; j++)	
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=i-1; j++)	
			printf("%d",p--);
		printf("\n");		
	}
	return 0;
}
*/


/*Pyramid (w)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)		
	{
		for(j=1; j<=n-i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=i; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=i-1; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (x)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("*");
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (y)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("%d",n+1-i);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (z)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("%d",j);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (z1)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		p=n+1-i;
		for(j=1; j<=n-i+1; j++)	
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=n-i; j++)	
			printf("%d",p--);
		printf("\n");		
	}
	return 0;
}
*/


/*Pyramid (z2)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=n-i+1; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=n-i; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	return 0;
}
*/


/*Pyramid (z3)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("*");
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("*");
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (z4)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("%d",i);
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("%d",n+1-i);
		printf("\n");		
	}
	return 0;
}
*/


/*Pyramid (z5)*/
/*
int main(void)
{
    int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=n-i; j++)	  
			printf(" ");
		for(j=1; j<=2*i-1; j++)	
			printf("%d",j);
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)	
			printf("%d",j);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (z6)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)		
	{
		for(j=1; j<=n-i; j++)	
			printf(" ");
		p=i;
		for(j=1; j<=i; j++)	
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=i-1; j++)	
			printf("%d",p--);
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		p=n+1-i;
		for(j=1; j<=n-i+1; j++)	
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=n-i; j++)	
			printf("%d",p--);
		printf("\n");		
	}
	return 0;
}
*/

/*Pyramid (z7)*/
/*
int main(void)
{
    int i,j,n,p;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)		
	{
		for(j=1; j<=n-i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=i; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=i-1; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=n-i+1; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=n-i; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	return 0;
}
*/