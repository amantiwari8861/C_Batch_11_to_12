/*E8.50*/
#include<stdio.h>
#define MAX 50
void rotate1(int a[],int size,int k);
void rotate2(int a[], int size, int k);
void reverse(int a[], int start, int end);
int main(void)
{
	int a[MAX],size,i,k;
	printf("Enter size of array : ");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&a[i]);
	}	
	printf("Enter k(How many times to rotate left): ");
	scanf("%d",&k);

	rotate1(a,size,k);
	for(i=0; i<size; i++)
        printf("%d ",a[i]);

	printf("\n");
	rotate2(a,size,k);
	for(i=0; i<size; i++)
        printf("%d ",a[i]);
	return 0;
}
/*rotate left by 1,k times*/
void rotate1(int a[],int size,int k)
{
	int i,j,temp;
	for(j=1; j<=k; j++)
	{
		temp=a[0];
		for(i=1; i<size; i++)
			a[i-1]=a[i];
		a[size-1]=temp;			
	}
}
/*rotate left by k using reverse()*/
void rotate2(int a[], int size, int k)
{
	reverse(a,0,k-1);
	reverse(a,k,size-1);
	reverse(a,0,size-1);
}

void reverse(int a[], int start, int end)
{
	int i,j,temp;
	for(i=start,j=end; i<j; i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}